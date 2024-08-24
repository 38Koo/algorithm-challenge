// https://atcoder.jp/contests/abc350/tasks/abc350_b
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> teeth(N, 1);
    vector<int> T(Q);
    for (int i =0; i < Q; i++) {
        cin >> T[i];
    }

    // ここから
    for (int i = 0; i < Q; i++) {
        if (teeth[T[i] - 1] == 1) {
            teeth[T[i] - 1] = 0;
        } else {
            teeth[T[i] - 1] = 1;
        }
    }

    int Answer = 0;
    for (int i = 0; i< N;i++) {
        if (teeth[i] == 1) {
            Answer += 1;
        }
    }
    
    cout << Answer << endl;

    
    return 0;
}