package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)

	var count int
	for i := 1; i <= N; i++ {
		if N % i == 0 {
			count++
		}
	}

	fmt.Println(count)
}
