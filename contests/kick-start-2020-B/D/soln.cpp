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
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        int W, H, L, U, R, D;
        cin >> W >> H >> L >> U >> R >> D;
        vector<vector<double>> dp(H + 1, vector<double>(W + 1, 0.0));
        dp[1][1] = 1.0;
        for(int r = 1; r <= H; ++r) {
            for(int c = 1; c <= W; ++c) {
                if(U < r && r <= D && L < c && c <= R) continue;
                if(c == W) {
                    if(!(U <= r - 1 && r - 1 <= D && L <= c && c <= R))
                        dp[r][c] += dp[r - 1][c];
                    if (!(U <= r && r <= D && L <= c - 1 && c - 1 <= R))
                        dp[r][c] += 0.5 * dp[r][c - 1];
                } else if (r == H) {
                    if(!(U <= r && r <= D && L <= c - 1 && c - 1 <= R))
                        dp[r][c] += dp[r][c - 1];
                    if (!(U <= r - 1 && r - 1 <= D && L <= c && c <= R))
                        dp[r][c] += 0.5 * dp[r - 1][c];
                } else {
                    if (!(U <= r - 1 && r - 1 <= D && L <= c && c <= R))
                        dp[r][c] += 0.5 * dp[r - 1][c];
                    if (!(U <= r && r <= D && L <= c - 1 && c - 1 <= R))
                        dp[r][c] += 0.5 * dp[r][c - 1];
                }
            }
        }
        /*
        for(int r = 1; r <= H; ++r) {
            for(int c = 1; c <= W; ++c) {
                cout << dp[r][c] << " ";
            }
            cout << endl;
        }
        */
        double ans = 1.0;
        for(int c = L; c <= R; ++c) ans -= dp[U][c];
        for(int r = U + 1; r <= D; ++r) ans -= dp[r][L];
        cout << "Case #" << case_id << ": ";
        cout << ans << endl;
    }
    return 0;
}

