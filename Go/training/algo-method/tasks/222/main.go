package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)

	var isPrimeNumber bool = false
	for i := 2; i * i <= N; i++ {
		if N % i == 0 {
			isPrimeNumber = true
			break
		}
	}

	if N == 1 || isPrimeNumber {
		fmt.Println("No")
	} else {
		fmt.Println("Yes")
	}
}
