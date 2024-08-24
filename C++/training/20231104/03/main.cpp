// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 9; i >= 0; i--) {
    int x = (1 << i);
    // cout << x << " " << (N / x) << endl;
    cout << (N / x) % 2;
  }

  cout << endl;
  return 0;
}
// 143
// 0010001111