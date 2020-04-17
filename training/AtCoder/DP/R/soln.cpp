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

const int MOD = 1e9 + 7;

int n;
long long k;


vector<vector<int>> mul(vector<vector<int>> A, vector<vector<int>> B) {
    vector<vector<int>> C(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                C[i][j] += ((long long) A[i][k] * B[k][j]) % MOD;
                C[i][j] %= MOD;
            }
        }
    }
    return C;
}

/*
vector<vector<int>> mod_pow(vector<vector<int>> A, long long k) {
    if(k % 2 == 1) {
        if (k == 1) return A;
        return mul(mod_pow(A, k - 1), A);
    } else {
        vector<vector<int>> half = mod_pow(A, k / 2);
        return mul(half, half);
    }
}
*/


/*
vector<vector<int>> mod_pow(vector<vector<int>> A, long long k) {
    if (k == 0) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for(int i = 0; i < n; ++i) ans[i][i] = 1;
        return ans;
    }
    vector<vector<int>> half = mod_pow(A, k / 2);
    if (k % 2 == 1) {
        return mul(mul(half, half), A);
    } else {
        return mul(half, half);
    }
}
*/

vector<vector<int>> mod_pow(vector<vector<int>> A, long long k) {
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i) ans[i][i] = 1;
    vector<vector<int>> v = A;
    if(k == 0) return ans;
    while(k) {
        if(k % 2 == 1) ans = mul(ans, v);
        k /= 2;
        v = mul(v, v);
    }
    return ans;
}

void add_self(int & x, int y) {
    x += y;
    if(x >= MOD) x -= MOD;
}

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    vector<vector<int>> A(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }
    vector<vector<int>> ans = mod_pow(A, k);
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            add_self(cnt, ans[i][j]);
        }
    }
    cout << cnt << endl;
    return 0;
}

