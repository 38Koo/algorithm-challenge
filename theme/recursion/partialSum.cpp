#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

bool partialSum(int N, int M) {

 if (N == 0) return M == 0;

  bool flag = false;
  if (M >= arr[N-1] && partialSum(N -1, M - arr[N-1])) flag = true;
  if (partialSum(N - 1, M)) flag = true;
  
  return flag;
}


int main() {
  int N, M;
  cin >> N >> M;
  arr.resize(N);
  for (int i = 0; i < N; i++) cin >> arr[i];

  string ans = partialSum(N, M) ? "Yes" : "No";

  cout << ans << endl;

  return 0;
}