// https://atcoder.jp/contests/abc329/tasks/abc329_b
#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int N;
    cin >> N;
    
    vector<int> Arr(N);
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    int First = 0;
    int Second = 0;
    
    for (int i = 0; i < N; i++) {
        if (Arr[i] > First) {
            First = Arr[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (Arr[i] != First) {
            if (Arr[i] > Second) {
                
            Second = Arr[i];
            }
        }
    }
    
    cout << Second << endl;
}