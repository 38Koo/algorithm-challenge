// https://wandbox.org/permlink/bK0Hh1i5dzQQ7M5q
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> B(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    long long Max = 0;
    long long Sum = 0;
    
    // B-Aの最大を求める Aの高さは全て使うので、最大値に影響を与えるのはB - A
    for (int i = 0; i < N; i++) {
        Sum += A[i];
        if (B[i] - A[i] > Max) {
            Max = B[i] - A[i];
        }
    }

    cout << Sum + Max << endl;
    
    return 0;
}