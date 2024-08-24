// https://atcoder.jp/contests/abc347/tasks/abc347_c
#include <iostream>
#include <vector>
#include <algorithm>
// 上記は下記で代用可能
// #include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> Arr(N);
    // 予定を1週間(7日間とは限らない)に圧縮
    vector<int> compressionArr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
        compressionArr[i] = Arr[i] % (A + B);
    }

    // ソート
    sort(compressionArr.begin(), compressionArr.end());

    // １週間を7とした場合、1, 6日目に予定があった場合、6日目から1日目の差分を計算するために用いる
    compressionArr.push_back(compressionArr[0] + A + B);

    string ans = "No";
    for (int i = 0; i < N; i++) {
        if (compressionArr[i + 1] - compressionArr[i] > B) {
            ans = "Yes";
            break;            
        }
    }
    
    cout << ans << endl;
    
    return 0;
}