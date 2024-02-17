// https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> term(N);
  vector<vector<int> > input(Q, vector<int>(2));

  for(int i = 0; i < N; ++i){
    cin >> term[i];
  }

  for(int i = 0; i < Q; ++i) {
    for(int j = 0; j < 2; ++j) {
      cin >> input[i][j];
    }
  }

  for(int i = 0; i < Q; ++i) {
    int sum;
    for(int j = input[i][0]; j <= input[i][1]; ++j) {
      sum += term[j - 1];
    }
    cout << sum << endl;
    sum = 0;
  }

  return 0;
}