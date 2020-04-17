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

const int MOD = 1e9 + 7;

int N, K;

int A[105];
int memo[105][100005];

// solve does not work
int solve(int idx, int left) {
    if(idx == N) return left == 0;
    if(memo[idx][left] != -1) return memo[idx][left];
    // how much should idx-th get
    int ans = 0;
    for(int i = 0; i <= A[idx]; ++i) {
        // solve(idx + 1, left - i)
        if(left >= i) ans = (1LL * ans + solve(idx + 1, left - i)) % MOD;
        else break;
    }
    memo[idx][left] = ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> K;
    memset(memo, -1, sizeof(memo));
    for(int i = 0; i < N; ++i) cin >> A[i];
    cout << solve(0, K) << endl;
    return 0;
}

