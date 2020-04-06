/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> board(3, vector<int>(3, 1));
    int dirs[5] = {0, 1, 0, -1, 0};
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int cnt;
            cin >> cnt;
            if (cnt & 1) {
                board[i][j] ^= 1;
                for(int k = 0; k < 4; ++k) {
                    int di = dirs[k], dj = dirs[k + 1];
                    int ni = i + di, nj = j + dj;
                    if(0 <= ni && ni < 3 && 0 <= nj && nj < 3) {
                        board[ni][nj] ^= 1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << (board[i][j] == 1 ? '1' : '0');
        }
        cout << endl;
    }

    return 0;
}

