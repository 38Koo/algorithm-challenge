#include <iostream>
#include <regex>
using namespace std;
int main(void){
    string S;
    
    cin >> S;
    int L = S.size();
    
    // 前後が矢印かどうか判定
    if (S.substr(0, 1) != "<" || S.substr(L - 1) != ">") {
        cout << "No" << endl;
    } else {
        // 正規表現
        string middle = S.substr(1, L - 2);
        std::regex re("=+");
        
        if(std::regex_match(middle, re)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
