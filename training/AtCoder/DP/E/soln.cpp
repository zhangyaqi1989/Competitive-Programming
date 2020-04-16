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
    int N, W;
    cin >> N >> W;
    int weights[105];
    int values[105];
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
        sum += values[i];
    }
    vector<vector<long long>> dp(2, vector<long long>(sum + 1, -1));
    // DP[i, j] minimum weights to achieve j?
    for(int i = 1; i <= N; ++i) {
        int cur = i & 1, pre = 1 - cur;
        dp[cur][0] = 0;
        dp[pre][0] = 0;
        for(int j = 1; j <= sum; ++j) {
            dp[cur][j] = dp[pre][j];
            // minimum weights to achieve j
            if(j >= values[i - 1] && dp[pre][j - values[i - 1]] != -1) {
                if(dp[cur][j] == -1) dp[cur][j] = weights[i - 1] + dp[pre][j - values[i - 1]];
                else dp[cur][j] = min(dp[cur][j], weights[i - 1] + dp[pre][j - values[i - 1]]);
            }
        }
    }
    int cur = N & 1;
    for(int j = sum; j >= 0; --j) {
        // cout << dp[cur][j] << endl;
        if(dp[cur][j] != -1 && dp[cur][j] <= W) {
            cout << j << endl;
            break;
        }
    }
    return 0;

}

