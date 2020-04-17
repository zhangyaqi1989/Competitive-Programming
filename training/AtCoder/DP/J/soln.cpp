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

const int N = 302;

double dp[N][N][N];

int n;


double solve(int a, int b, int c) {
    if(a == 0 && b == 0 && c == 0) return 0.0;
    if(dp[a][b][c] > -0.5) return dp[a][b][c];
    double ans = 0.0;
    double kt = (double) n / (a + b + c);
    if(a > 0) ans += (solve(a - 1, b, c) + kt) * ((double) a / (a + b + c));
    if(b > 0) ans += (solve(a + 1, b - 1, c) + kt) * ((double) b / (a + b + c));
    if(c > 0) ans += (solve(a, b + 1, c - 1) + kt) * ((double) c / (a + b + c));
    return dp[a][b][c] = ans;
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int counter[4] = {0};
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++counter[x];
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            for(int k = 0; k < N; ++k) {
                dp[i][j][k] = -1.0;
            }
        }
    }
    printf("%.12lf\n", solve(counter[1], counter[2], counter[3]));
    return 0;
}

