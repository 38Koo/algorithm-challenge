package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	var N, V int
	fmt.Scanf("%d %d", &N, &V)

	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	inputs := strings.Split(sc.Text(), " ")
	
	var As []int
	for _, input := range inputs {
		A, _ := strconv.Atoi(input)
		As = append(As, A)
	}

	order := -1
	for i, A := range As {
		if A == V {
			order = i
		}
	}

	fmt.Println(order)
}
