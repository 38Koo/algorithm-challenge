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

	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input) // 前後の空白を削除
	inputs := strings.Split(input, " ")

	var Arr []int64
	for _, input := range inputs {
		el, _ := strconv.ParseInt(input, 10, 64)
		Arr = append(Arr, el)
	}

	var max int64 = 0
	for _, el := range Arr {
		if el > max {
			max = el
		}
	}
	
	var count int64 = 0
	for _, el := range Arr {
		if el == max {
			count++
		}
	}

	fmt.Println(count)
	
}
