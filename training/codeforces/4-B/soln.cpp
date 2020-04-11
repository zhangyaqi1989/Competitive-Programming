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
    int d, total;
    cin >> d >> total;
    int lo = 0, hi = 0;
    vector<pair<int, int>> ranges;
    for(int i = 0; i < d; ++i) {
        int mn, mx;
        cin >> mn >> mx;
        ranges.emplace_back(mn, mx);
        lo += mn;
        hi += mx;
    }
    if(total < lo || total > hi) cout << "NO" << endl;
    else {
        total -= lo;
        cout << "YES" << endl;
        for(int i = 0; i < d; ++i) {
            int mn = ranges[i].first, mx = ranges[i].second;
            int add = min(total, mx - mn);
            cout << mn + add << " ";
            total -= add;
        }
        cout << endl;
    }

    return 0;
}

