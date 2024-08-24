// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_e

#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int count = 0;
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      int thirdNumber = K - i -j;
      if (thirdNumber >= 1 && thirdNumber <= N) {
        count += 1;  
      }
    }
  }

  cout << count << endl;
  return 0;
}
