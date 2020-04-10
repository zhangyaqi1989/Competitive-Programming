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
#include<stack>
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
    vector<int> hs;
    for(int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        hs.push_back(h);
    }
    int mx = 1;
    for(int i = 0; i < n; ++i) {
        int lo = i, hi = i;
        while(lo > 0 && hs[lo - 1] <= hs[lo]) --lo;
        while(hi < n - 1 && hs[hi + 1] <= hs[hi]) ++hi;
        mx = max(mx, hi - lo + 1);
    }
    cout << mx << endl;

    return 0;
}

