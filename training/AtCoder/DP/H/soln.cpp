/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    char grid[1005][1005];
    const int MOD = 1e9 + 7;
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> dp(h, vector<int>(w, 0));
    for(int j = 0; j < w; ++j) {
        if(grid[0][j] == '#') break;
        dp[0][j] = 1;
    }
    for(int i = 0; i < h; ++i) {
        if(grid[i][0] == '#') break;
        dp[i][0] = 1;
    }
    for(int i = 1; i < h; ++i) {
        for(int j = 1; j < w; ++j) {
            if(grid[i][j] == '.') {
                dp[i][j] = ((long long) dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    cout << dp[h - 1][w - 1] << endl;
    return 0;

}

