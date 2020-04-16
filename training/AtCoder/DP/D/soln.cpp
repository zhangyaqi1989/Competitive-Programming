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
    int N, W;
    cin >> N >> W;
    // dp[i, j]
    long long dp[2][W + 1];
    memset(dp, 0, sizeof dp);
    vector<int> ws(N), vs(N);
    for(int i = 0; i < N; ++i) {
        cin >> ws[i] >> vs[i];
    }
    for(int i = 1; i <= N; ++i) {
        int cur = i & 1;
        int pre = 1 - cur;
        for(int j = 1; j <= W; ++j) {
            dp[cur][j] = dp[pre][j];
            if(j >= ws[i - 1]) {
                dp[cur][j] = max(dp[cur][j], dp[pre][j - ws[i - 1]] + vs[i - 1]);
            }
        }
    }
    cout << dp[N & 1][W] << endl;
    return 0;
}

