/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
#include<cmath>
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
    int n;
    cin >> n;
    // populate the table
    const int N = 1000005;
    vector<bool> is_primes(N, true);
    is_primes[0] = false;
    is_primes[1] = false;
    for(int i = 2; i < N; ++i) {
        if(is_primes[i]) {
            for(int j = 2 * i; j < N; j += i) is_primes[j] = false;
        }
    }
    for(int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        int r = (int) sqrt(x);
        if(is_primes[r] && 1LL * r * r == x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
