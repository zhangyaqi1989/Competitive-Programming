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
    // k consecutive planks
    vector<int> hs;
    for(int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        hs.push_back(h);
    }
    int window = 0;
    int mn = INT_MAX;
    int ans = -1;
    for(int i = 0; i < n; ++i) {
        window += hs[i];
        if(i - k >= 0) window -= hs[i - k];
        if(i >= k - 1) {
            if(window < mn) {
                mn = window;
                ans = i - k + 1;
            }
        }
    }
    cout << ans + 1 << endl;
    return 0;
}

