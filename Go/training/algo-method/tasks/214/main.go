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

	var Arr []int
	for _, input := range inputs {
		el, _ := strconv.Atoi(input)
		Arr = append(Arr, el)
	}

	min := 100
	for _, el := range Arr {
		if el < min {
			min = el
		}
	}

	fmt.Println(min)

}
