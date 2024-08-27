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

	count := 0
	for _, el := range Arr {
		if el > 0 {
			count++
		}
	}

	fmt.Println(count)

}
