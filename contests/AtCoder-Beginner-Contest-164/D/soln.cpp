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

const int MAXN = 200005;
const int MOD = 2019;
int dp[2][2019];

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    memset(dp, 0, sizeof dp);
    long long ans = 0LL;
    int n = S.length();
    for(int i = 0; i < n; ++i) {
        int cur = i & 1;
        int pre = 1 - cur;
        int d = S[i] - '0';
        for(int j = 0; j < MOD; ++j) dp[cur][j] = 0;
        dp[cur][d % MOD] += 1;
        for(int j = 0; j < MOD; ++j) {
            int k = (j * 10 + d) % MOD;
            dp[cur][k] += dp[pre][j];
        }
        ans += dp[cur][0];
    }
    // for(int i = 1; i <= n; ++i) ans += dp[i][0];
    cout << ans << endl;
    return 0;
}

