/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
#include<iostream>
#include<map>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> M(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> M[i][j];
        }
    }

    vector<int> dp(1 << n, 0);
    dp[0] = 1;
    for(int mask = 0; mask < (1 << n) - 1; ++mask) {
        int a = __builtin_popcount(mask);
        for(int b = 0; b < n; ++b) {
            if(M[a][b] && (mask & (1 << b)) == 0) {
                dp[mask | (1 << b)] = (1LL * dp[mask | (1 << b)] + dp[mask]) % MOD;
            }
        }
    }
    cout << dp[(1 << n) - 1] << endl;
    return 0;
}
