package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)

	var count int

	for i := 0; i <= N; i++ {
		if i % 2 == 0 || i % 3 == 0 || i % 5 == 0 {
			continue
		}
		count++
	}

	fmt.Println(count)
}
