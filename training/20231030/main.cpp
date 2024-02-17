// https://atcoder.jp/contests/abc325/tasks/abc325_b
// 解答はこちらを参照 - https://drken1215.hatenablog.com/entry/2023/10/22/150841
// 全探索

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long> w(N) ,x(N);
  for (int i = 0; i < N; ++i) cin >> w[i] >> x[i];

  long result = 0;

  for(int t = 0; t < 24; ++t) {
    long num = 0;
    for (int i = 0; i < N; ++i) {
      int local_t = (t + x[i]) % 24;
      if (local_t >= 9 && local_t < 18) {
        num += w[i];
      }
    }
    result = max(result, num);
  }

  cout << result << endl;
}
