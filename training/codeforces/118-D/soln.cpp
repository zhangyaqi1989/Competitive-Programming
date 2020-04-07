/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

int dp[101][101][2][11];
const int MOD = 100000000;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    // dp[101][101][2][11]
    memset(dp, 0, sizeof(dp));
    dp[0][0][0][0] = 1;
    dp[0][0][1][0] = 1;
    for(int i = 0; i <= n1; ++i) {
        for(int j = 0; j <= n2; ++j) {
            if(i == 0 && j == 0) continue;
            // put first kind
            if (i >= 1) {
                int a = 0;
                for(int k = 0; k <= k2; ++k) a = (a + dp[i - 1][j][1][k]) % MOD;
                for(int k = 1; k <= k1; ++k) {
                    if (k == 1) dp[i][j][0][k] = a;
                    else dp[i][j][0][k] = dp[i - 1][j][0][k - 1];
                }
            }
            // put second kind
            if (j >= 1) {
                int b = 0;
                for(int k = 0; k <= k1; ++k) b = (b + dp[i][j - 1][0][k]) % MOD;
                for(int k = 1; k <= k2; ++k) {
                    // dp[i][j][1][k] = dp[i][j - 1][1][k - 1];
                    if (k == 1) dp[i][j][1][k] = b;
                    else dp[i][j][1][k] = dp[i][j - 1][1][k - 1];
                }
            }
        }
    }
    int ans = 0;
    for(int k = 1; k <= k1; ++k) ans = (ans + dp[n1][n2][0][k]) % MOD;
    for(int k = 1; k <= k2; ++k) ans = (ans + dp[n1][n2][1][k]) % MOD;
    cout << ans << endl;
    return 0;
}

