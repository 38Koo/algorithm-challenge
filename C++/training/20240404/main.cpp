// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cb
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    int ans = 1000;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 10^8以上なら全探索禁止
    for (int i = 0;i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for (int k = j + 1;k < N;k++) {
                if (arr[i] + arr[j] + arr[k] == ans) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    
    return 0;
}
