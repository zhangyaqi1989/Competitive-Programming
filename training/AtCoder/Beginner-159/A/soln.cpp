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
    int n_even, n_odd;
    cin >> n_even >> n_odd;
    int ans = n_even * (n_even - 1) / 2 + n_odd * (n_odd - 1) / 2;
    cout << ans << endl;

    return 0;
}

