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
    char grid[4][4];
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            char ch;
            cin >> ch;
            grid[i][j] = ch;
        }
    }
    bool valid = false;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int cnt = 0;
            for(int p = i; p < i + 2; ++p) {
                for(int q = j; q < j + 2; ++q) {
                    cnt += grid[p][q] == '#';
                }
            }
            if(cnt != 2) {
                valid = true;
                break;
            }
        }
    }
    cout << (valid ? "YES" : "NO") << endl;

    return 0;
}

