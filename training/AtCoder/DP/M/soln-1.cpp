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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    const int MOD = 1e9 + 7;
    for(int i = 0; i < N; ++i) cin >> A[i];
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[N][0] = 1;
    for(int i = N - 1; i >= 0; --i) {
        vector<int> pres(K + 2, 0);
        for(int p = 1; p < K + 2; ++p) pres[p] = (1LL * dp[i + 1][p - 1] + pres[p - 1]) % MOD;
        for(int j = 0; j < K + 1; ++j) {
            dp[i][j] = (1LL * pres[j + 1] - pres[max(0, j - A[i])]) % MOD;
            if(dp[i][j] < 0) dp[i][j] += MOD;
            // dp[i][j] += dp[i + 1][j - cand];
            // sum over j - A[i] <= p <= j dp[i + 1][p]
        }
    }
    cout << dp[0][K] << endl;
    return 0;
}

