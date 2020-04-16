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
    int n;
    cin >> n;
    vector<double> ps(n);
    for(int i = 0; i < n; ++i) cin >> ps[i];
    // DP[i, j] [0, i) coins, j heads
    vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0.0));
    dp[0][0] = 1.0;
    for(int i = 1; i <= n; ++i) {
        double p_head = ps[i - 1], p_tail = 1 - p_head;
        for(int j = 0; j <= i; ++j) {
            dp[i][j] = dp[i - 1][j] * p_tail;
            if(j - 1 >= 0) dp[i][j] += dp[i - 1][j - 1] * p_head;
        }
    }
    // cout << dp[n][n / 2 + 1] << endl;
    double ans = 0.0;
    for(int j = n / 2 + 1; j <= n; ++j) ans += dp[n][j];
    // cout << ans << endl;
    printf("%.10lf\n", ans);
    return 0;

}

