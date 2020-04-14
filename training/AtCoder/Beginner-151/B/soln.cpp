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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    for(int i = 0; i < n - 1; ++i) {
        int x;
        cin >> x;
        sum += x;
    }
    int lo = m * n - sum;
    cout << (lo <= k ? max(lo, 0) : -1) << endl;
    return 0;

}

