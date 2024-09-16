package main

import "fmt"

func main() {
	var S string
	fmt.Scanf("%s", &S)

	var count int
	for i := 1; i < len(S); i++ {
		if S[i - 1] == S[i] {
			count++
		}
	}

	fmt.Println(count)
}
