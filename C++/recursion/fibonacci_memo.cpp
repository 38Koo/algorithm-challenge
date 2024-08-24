#include <iostream>
#include <vector>
using namespace std;

// オーバーフローを避けるためにlong longを使用
vector<long long> arr;

long long fibonacci(int N) {

  if(arr[N] != -1) return arr[N];

  if(N == 0) return arr[0] = 0;
  if(N == 1) return arr[1] = 1;

  return arr[N] = fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
  int N;
  cin >> N;

  arr.resize(N + 1, -1);

  cout << fibonacci(N) << endl;

  return 0;
}