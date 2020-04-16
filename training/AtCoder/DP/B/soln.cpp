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

int dp[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> hs(n);
    for(int i = 0; i < n; ++i) cin >> hs[i];
    dp[0] = 0;
    for(int i = 1; i < n; ++i) {
        dp[i] = INF;
        for(int j = 1; j <= k && i - j >= 0; ++j) {
            if(i - j >= 0) dp[i] = min(dp[i], dp[i - j] + abs(hs[i] - hs[i - j]));
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}

