// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int len, n; 
  cin >> len >> n;
  vector<int> L(n), R(n);

  for (int i = 0; i < n; ++i){
    cin >> L[i] >> R[i];
  }

  int ans = 0;
  for (int i = 1; i <= len; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i >= L[j] && i <= R[j]) {
        ans += 1;

      }
    }
    
    cout << ans << endl;
    ans = 0;
  }

  return 0;
}

//解説: https://github.com/E869120/kyopro-tessoku/blob/main/codes/cpp/chap02/answer_A07.cpp