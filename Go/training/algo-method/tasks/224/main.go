package main

import "fmt"

func main() {
	var N, M int
	fmt.Scanf("%d %d", &N, &M)

	ans := GCD(N, M)

	fmt.Println(ans)
}

func GCD(a, b int) int {
	if b == 0 {
		return a
	}
	return GCD(b, a % b)
}
