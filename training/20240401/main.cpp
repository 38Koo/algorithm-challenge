// https://atcoder.jp/contests/abc339/tasks/abc339_b
#include <iostream>
#include <vector>
using namespace std;
int main(void){
    // Your code here!
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<vector<string> > arr(H, vector<string>(W, "."));
    
    int direction = 1;
    int X = 0;
    int Y = 0;
    
    for (int i = 0; i < N; i++) {
        if (arr.at(X).at(Y) == ".") {
            arr.at(X).at(Y) = "#";
            switch (direction)
                {
                    case 1:
                        if (Y == W - 1) {
                            Y = 0;
                        } else {
                            Y += 1;
                        }
                        direction = 2;
                        break;
                    case 2: 
                        if (X == H - 1) {
                            X = 0;
                        } else {
                            X += 1;
                        }
                        direction = 3;
                        break;
                    case 3: 
                        if (Y == 0) {
                            Y = W -1;
                        } else {
                            Y -= 1;
                        }
                        direction = 4;
                        break;
                    case 4:
                        if (X == 0) {
                            X = H - 1;
                        } else {
                            X -= 1;
                        }
                        direction = 1;
                        break;
                }
        } else {
            arr.at(X).at(Y) = ".";
            switch (direction)
                {
                    case 1: 
                        if (Y == 0) {
                            Y = W - 1;
                        } else {
                            Y -= 1;
                        }
                        direction = 4;
                        break;
                    case 4: 
                        if (X == H - 1) {
                            X = 0;
                        } else {
                            X += 1;
                        }
                        direction = 3;
                        break;
                    case 3: 
                        if (Y == W - 1) {
                            Y = 0;
                        } else {
                            Y += 1;
                        }
                        direction = 2;
                        break;
                    case 2: 
                        if (X == 0) {
                            X = H - 1;
                        } else {
                            X -= 1;
                        }
                        direction = 1;
                        break;
                }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << arr.at(i).at(j);
        }
            cout << endl;        
    }
}
