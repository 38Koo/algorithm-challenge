package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	var N int
	fmt.Scanf("%d", &N)

	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	inputs := strings.Split(sc.Text(), " ")

	var Arr []int64
	for _, input := range inputs {
		A, _ := strconv.ParseInt(input, 10, 64)
		Arr = append(Arr, A)
	}

	count := 0
	for i := range Arr {
		if i == 0 {
			continue
		}

		if Arr[i - 1] < Arr[i] {
			count++
		}
	}

	fmt.Println(count)

}
