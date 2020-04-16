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
    int n;
    cin >> n;
    vector<int> hs(n);
    for(int i = 0; i < n; ++i) cin >> hs[i];
    dp[0] = 0;
    for(int i = 1; i < n; ++i) {
        dp[i] = INF;
        if(i - 1 >= 0) dp[i] = min(dp[i], dp[i - 1] + abs(hs[i] - hs[i - 1]));
        if(i - 2 >= 0) dp[i] = min(dp[i], dp[i - 2] + abs(hs[i] - hs[i - 2]));
    }
    cout << dp[n - 1] << endl;
    return 0;
}

