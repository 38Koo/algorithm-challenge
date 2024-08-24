#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<vector<int> > memo;

int partialSum_Memo(int N, int M) {
  
  if (memo[N][M] != -1) return memo[N][M];

  if (N == 0) return memo[N][M] = M == 0;

  int flag = 0;
  memo[N][M] = 0;
  if (M >= arr[N - 1] && partialSum_Memo(N - 1, M - arr[N - 1]) == 1) flag = 1;
  if (partialSum_Memo(N - 1, M) == 1) flag = 1;

  return flag;
}



int main() {
  int N, M;
  cin >> N >> M;
  arr.resize(N);
  for (int i = 0; i < N; i++) cin >> arr[i];

  memo.resize(N + 1, vector<int>(M + 1, -1));

  string ans = partialSum_Memo(N, M) == 1 ? "Yes" : "No";

  cout << ans << endl;

  return 0;
}