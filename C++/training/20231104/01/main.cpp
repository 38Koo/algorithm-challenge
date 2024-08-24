// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;

  cin >> N >> X;
  vector<int> a(N);

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }

  bool exist = false;
  for(int i = 0; i < N; ++i) {
    if (a[i] == X) {
     exist = true;
    }
  }

  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;

}