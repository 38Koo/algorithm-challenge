// https://atcoder.jp/contests/abc346/tasks/abc346_a
#include <iostream>
#include <vector>
using namespace std;

int main(void){
  // input
  int N;
  cin >> N;
  
  vector<int> Arr(N);
  
  for (int i = 0; i < N; i++) {
      cin >> Arr[i];
  }

  // 処理
  for (int i = 0; i < N - 1; i++) {
      cout << Arr[i] * Arr[i + 1] << " ";
  }
}
