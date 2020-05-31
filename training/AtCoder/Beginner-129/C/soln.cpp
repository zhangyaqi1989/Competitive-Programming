/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

const int N = 100000;
bool brokens[N];
const int MOD = 1e9 + 7;

void add_self(int & x, int y) {
    x += y;
    if(x >= MOD) x -= MOD;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    memset(brokens, 0, sizeof brokens);
    for(int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        brokens[a] = 1;
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i < n + 1; ++i) {
        if(!brokens[i]) {
            add_self(dp[i], dp[i - 1]);
            if(i - 2 >= 0) {
                add_self(dp[i], dp[i - 2]);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}

