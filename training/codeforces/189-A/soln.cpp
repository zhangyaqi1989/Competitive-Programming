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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for(int i = 1; i <= n; ++i) {
        if(i >= a && dp[i - a] != -1) dp[i] = max(dp[i], dp[i - a] + 1);
        if(i >= b && dp[i - b] != -1) dp[i] = max(dp[i], dp[i - b] + 1);
        if(i >= c && dp[i - c] != -1) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}

