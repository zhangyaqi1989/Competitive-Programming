/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

const int N = 3e3 + 10;
const int MOD = 998244353;
int A[N];
int dp[N];

int n, s;

void add(int &x, int y) {
    x += y;
    if(x >= MOD) x -= MOD;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    scanf("%d %d", &n, &s);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ++dp[0];
        for(int v = s; v >= A[i]; --v) {
            add(dp[v], dp[v - A[i]]);
        }
        add(ans, dp[s]);
    }
    cout << ans << endl;
    return 0;
}
