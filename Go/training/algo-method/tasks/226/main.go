package main

import (
	"fmt"
	"strings"
)

func main() {
	var N string
	var C string

	fmt.Scanf("%s", &N)
	fmt.Scanf("%s", &C)

	ans := strings.Index(N, C)
	if ans == -1 {
		fmt.Println("No")
	} else {
		fmt.Println("Yes")
	}
}
