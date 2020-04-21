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

const int N = 1025;
int dp[N][N];


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 0; case_id < T; ++case_id) {
        int d;
        cin >> d;
        int n;
        cin >> n;
        int x, y, num;
        memset(dp, 0, sizeof dp);
        for(int i = 0; i < n; ++i) {
            cin >> x >> y >> num;
            for(int p = max(0, x - d); p <= min(x + d, N - 1); ++p) {
                for(int q = max(0, y - d); q <= min(y + d, N - 1); ++q) {
                    dp[p][q] += num;
                }
            }
        }
        int ans_x = -1, ans_y = -1;
        int mx = 0;
        for(int x = 0; x < N; ++x) {
            for(int y = 0; y < N; ++y) {
                if(dp[x][y] > mx) {
                    mx = dp[x][y];
                    ans_x = x;
                    ans_y = y;
                }
            }
        }
        cout << ans_x << " " << ans_y << " " << mx << endl;
    }
    return 0;

}

