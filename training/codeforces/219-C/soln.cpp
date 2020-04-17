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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<vector<int>> dp(n, vector<int>(k, n + 1));
    vector<vector<int>> parents(n, vector<int>(k, -1));
    for(int i = 0; i < k; ++i) dp[0][i] = (s[0] - 'A') != i;
    for(int i = 1; i < n; ++i) {
        for(int cur = 0; cur < k; ++cur) {
            int mn = n + 1;
            int mn_idx = -1;
            for(int pre = 0; pre < k; ++pre) {
                if(pre == cur) continue;
                if(dp[i - 1][pre] < mn) {
                    mn = dp[i - 1][pre];
                    mn_idx = pre;
                }
            }
            dp[i][cur] = mn + ((s[i] - 'A') != cur);
            parents[i][cur] = mn_idx;
        }
    }
    int ans = n + 1;
    int ans_idx = -1;
    for(int i = 0; i < k; ++i){
        if(dp[n - 1][i] < ans) {
            ans = dp[n - 1][i];
            ans_idx = i;
        }
    }
    cout << ans << endl;
    string new_s;
    int idx = n - 1;
    while(ans_idx != -1) {
        new_s += (char) ('A' + ans_idx);
        ans_idx = parents[idx][ans_idx];
        --idx;
    }
    reverse(new_s.begin(), new_s.end());
    cout << new_s << endl;
    return 0;

}

