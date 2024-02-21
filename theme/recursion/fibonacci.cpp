#include <iostream>
#include <vector>
using namespace std;

// 計算量に問題あり、計算量を考慮したフィボナッチ数列はfibonacci_memoを参照

int fibonacci(int N) {

  if (N == 0) return 0;
  if (N == 1) return 1;

  return fibonacci(N -1) + fibonacci(N - 2);
}

int main() {
  int N;
  cin >> N;


  cout << fibonacci(N) << endl;

  return 0;
}