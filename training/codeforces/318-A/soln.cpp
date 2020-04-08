/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    // How many odd numbers
    ll n_odds = 0;
    if(n % 2 == 0) {
        n_odds = (n - 1 - 1) / 2 + 1;
    } else {
        n_odds = (n - 1) / 2 + 1;
    }
    if(k <= n_odds) {
        cout << 1LL + 2LL * (k - 1) << endl;
    } else {
        k -= n_odds;
        cout << 2LL + 2LL * (k - 1) << endl;
    }

    return 0;
}

