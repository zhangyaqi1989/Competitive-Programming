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
    int n, k;
    cin >> n >> k;
    // at least k times
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        int y;
        cin >> y;
        if(y + k <= 5) ++cnt;
    }
    cout << cnt / 3 << endl;
    return 0;
}

