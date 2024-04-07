// https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> L(Q);
    vector<int> R(Q);

    for (int i = 0; i < Q; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> X(N + 1);
    X[0] = 0;
    
    for (int i = 0; i < N; i++) {
        X[i + 1] = X[i] + A[i];
    }

    for (int i = 0; i < Q; i++) {
        cout << X[R[i]] - X[L[i] - 1]  << endl;
    }
    
    return 0;
}
