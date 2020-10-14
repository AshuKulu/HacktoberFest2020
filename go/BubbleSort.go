package main

import (
	"fmt"
	"math/rand"
)
//Change array size here:
var yourArray [80]int

func main(){
	fillArray()
	fmt.Println("Unsorted Array: ")
	output() //show unsorted array
	sortArray()
	fmt.Println("Sorted Array: ")
	output() //show sorted array
}

func fillArray(){
	for i := 0; i < len(yourArray); i++ {
		yourArray[i] = rand.Intn(400) // n: random number gap
	}
}

func sortArray(){
	for i := 0; i < len(yourArray); i++ {
		for j := 1; j < len(yourArray); j++ {
			//hop if numbers have to switch
			if yourArray[j] < yourArray[j-1] {
				yourArray[j], yourArray[j-1] = yourArray[j-1], yourArray[j]
			}
		}

	}
}

func output(){
	var i int
	fmt.Print("{ ")
	for i = 0; i < len(yourArray) -1; i++ {
		fmt.Print(yourArray[i])
		fmt.Print(", ")
	}
	fmt.Print(yourArray[i])
	fmt.Print(" }")
	fmt.Println("")
}

