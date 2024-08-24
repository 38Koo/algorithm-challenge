#include <iostream>
#include <vector>
using namespace std;

int main(){
  // 入力はスペース区切り
  //  "code-runner.executorMap": {
  //   "cpp": "cd $dir && g++ -O2 -std=c++14 $fileName && ./a.out",
  cout << "Hello World!" << endl;
  int N, v;
  cin >> N >> v;
  vector<int> a(N);

  for (int i = 0; i < N; ++i) cin >> a[i];
  for (int i = 0; i < N; ++i) {
   cout << a[i] << endl;
  }

  // 線形探索
  bool exist = false;
  for (int i = 0; i < N; ++i) {
    if (a[i] == v) {
      exist = true;
    }
  }

  if (exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}
