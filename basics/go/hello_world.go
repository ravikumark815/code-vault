/*
Author: Ravi Koothati
GitHub: https://github.com/ravikumark815

This file is part of the 'code-vault' repository.
Feel free to explore and contribute!
*/

package main

import "fmt"
import "os"
import "bufio"
import "regexp"

type linkedlist struct {
	node *linkedlist
	data int
}

func ravi(nums ...int) (c int, err error) {
	var sum int = 0
	for _, i := range nums {
		sum += i
	}
	return sum, nil
}

func printTo5(channel chan int) {
	for i := 1; i <= 5; i++ {
		channel <- i
	}
}
func printTo10(channel chan int) {
	for i := 1; i <= 10; i++ {
		channel <- i
	}
}

func main() {
	fmt.Println("Hello World!")
	// var res, err = ravi([]int{200, 300, 400, 100})
	fmt.Println(ravi([]int{200, 300, 400, 100}...))

	fptr, err := os.Create("test.txt")
	defer fptr.Close()

	fmt.Println(err)
	fptr.WriteString("Ravi Kumar")
	buffer := bufio.NewScanner(fptr)
	fmt.Println(buffer.Text)
	for buffer.Scan() {
		fmt.Println(buffer.Text)
	}

	var l1 linkedlist
	l1.node = nil
	l1.data = 100
	fmt.Println(l1.data)

	channel1 := make(chan int)
	channel2 := make(chan int)

	go printTo5(channel1)
	go printTo10(channel2)

	reStr := "The ape was at the apex"
	match, _ := regexp.MatchString("ape[^ ]", reStr) // ape not followed by a space
	fmt.Println(match)
}
