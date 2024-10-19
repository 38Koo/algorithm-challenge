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

	hasChanged := false
	for i := 0; i < len(Arr) - 1; i++ {
 		for j := 0; j < len(Arr) - 1; j++ {
			if Arr[j] > Arr[j + 1]  {
 				tmp := Arr[j]
				Arr[j] = Arr[j + 1]
				Arr[j + 1] = tmp
				hasChanged = true
			} 
		}
		if hasChanged {
			for _, el := range Arr {
				fmt.Print(el, " ")
			}
			fmt.Println()
			hasChanged = false
		} 
	}
}
