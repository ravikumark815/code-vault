/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

#include <stdio.h>
#include <stddef.h>
#include <unistd.h> // For sbrk
// #include <pthread.h> // For thread safety

struct block {
    size_t size; // Size of the block
    int free; // Status flag, 1: Occupied, 0: Free
    struct block *next; // Pointer to next block
};
typedef struct block * BLOCK;

void *head = NULL;
// static pthread_mutex_t malloc_lock = PTHREAD_MUTEX_INITIALIZER;

BLOCK find_free_block(BLOCK *last, size_t size) {
    BLOCK cur = head;
    // Find a block that is free and large enough.
    // Loop while the block is occupied or too small.
    while (cur && (cur->free || cur->size < size)) {
        *last = cur;
        cur = cur->next;
    }
    return cur;
}

BLOCK request_new_space(BLOCK last, size_t size) {
    // sbrk returns (void*)-1 on error
    void *request = sbrk(size + sizeof(struct block));
    if (request == (void*) - 1) return NULL;
    BLOCK block = (BLOCK)request;
    if (last) last->next = block;

    block->size = size;
    block->next = NULL;
    block->free = 1; // Newly allocated block is immediately occupied

    return block;
}

void *my_malloc(size_t size) {
    BLOCK block;
    if ( size <= 0 ) return NULL;

    // pthread_mutex_lock(&malloc_lock);

    /* Optimization: Align to 8 bytes for better performance.
     * The original line was `// size = (size + 7) & (-7);` which is incorrect for alignment.
     * The correct way to align to an 8-byte boundary is `(size + 7) & ~7`.
     */
    // size = (size + 7) & ~7;

    if (!head) {
        block = request_new_space(NULL, size);
        if (!block) {
            // pthread_mutex_unlock(&malloc_lock);
            return NULL;
        }
        head = block;
    } else {
        BLOCK last = NULL;
        block = find_free_block(&last, size);
        if (!block) {
            block = request_new_space(last, size);
            if (!block) {
                // pthread_mutex_unlock(&malloc_lock);
                return NULL;
            }
        } else {
            /* Optimization: Splitting a large block.
             * If the found block is much larger than needed, split it to reduce internal fragmentation.
             * A threshold (e.g., 8 bytes) is used for the new block's metadata and minimal data area.
             */
            // if (block->size >= size + sizeof(struct block) + 8) {
            //     BLOCK new_block = (BLOCK)((char*)block + sizeof(struct block) + size);
            //     new_block->size = block->size - size - sizeof(struct block);
            //     new_block->free = 0; // Mark the new split block as free
            //     new_block->next = block->next;
            //     block->size = size;
            //     block->next = new_block;
            // }
            block->free = 1;
        }
    }

    // pthread_mutex_unlock(&malloc_lock);

    // Return a pointer to the region after the metadata header
    return (block + 1);
}

void my_free(void *ptr) {
    if (!ptr) return;

    // pthread_mutex_lock(&malloc_lock);

    // Get the block header from the user pointer
    BLOCK block = (BLOCK)ptr - 1;
    block->free = 0;

    /* Optimization: Merge with the next block if it is also free.
     * This helps to reduce external fragmentation by creating larger contiguous free blocks.
     */
    // if (block->next && !block->next->free) {
    //     block->size += sizeof(struct block) + block->next->size;
    //     block->next = block->next->next;
    // }

    // pthread_mutex_unlock(&malloc_lock);
}

int main() {
    printf("Testing custom malloc and free.\n\n");

    int *p = (int*)my_malloc(sizeof(int));
    *p = 123;
    printf("Allocated an int at %p, value: %d\n", (void*)p, *p);

    char *s = (char*)my_malloc(50);
    sprintf(s, "Hello from custom malloc!");
    printf("Allocated a string at %p, value: \"%s\"\n", (void*)s, s);

    printf("\nFreeing int pointer p.\n");
    my_free(p);

    int *p2 = (int*)my_malloc(sizeof(int));
    *p2 = 456;
    printf("Allocated another int at %p, value: %d. It should reuse the memory from p.\n", (void*)p2, *p2);

    my_free(s);
    my_free(p2);
    
    return 0;
}
