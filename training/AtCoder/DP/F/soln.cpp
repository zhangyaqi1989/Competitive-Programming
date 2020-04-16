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
    // LCS: longest common subsequence
    // DP[i, j] is the LCS of s[i:] and t[j:]
    // DP[ns, nt] = 0
    string s, t;
    cin >> s >> t;
    int ns = s.length(), nt = t.length();
    vector<vector<int>> dp(ns + 1, vector<int>(nt + 1, 0));
    for(int i = ns - 1; i >= 0; --i) {
        for(int j = nt - 1; j >= 0; --j) {
            if(s[i] == t[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    int i = 0, j = 0;
    string ans;
    while(dp[i][j] != 0) {
        if(s[i] == t[j]) {
            ans += s[i];
            ++i;
            ++j;
        } else {
            if(dp[i + 1][j] > dp[i][j + 1]) ++i;
            else ++j;
        }
    }
    cout << ans << endl;
    return 0;

}

