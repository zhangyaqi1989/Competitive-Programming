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

const int MOD = 1e9 + 7;

int modpow(int x, int y, int mod) {
    if (y == 0) return 1;
    int half = modpow(x, y / 2, mod);
    if(y & 1) return 1LL * half * half % mod * x % mod;
    else return 1LL * half * half % mod;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> dp(k + 1, -1);
    for(int x = k; x > 0; --x) {
        int cnt = k / x;
        dp[x] = modpow(cnt, n, MOD);
        for(int i = 2; i <= cnt; ++i) {
            dp[x] = (dp[x] - dp[x * i] + MOD) % MOD;
        }
    }
    int ans = 0;
    for(int i = 1; i <= k; ++i) {
        ans = (ans + 1LL * i * dp[i] % MOD) %MOD;
    }
    cout << ans << endl;
    return 0;
}

