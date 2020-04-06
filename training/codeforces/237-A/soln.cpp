/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int slots[1440] = {};
    int h, m;
    for(int i = 0; i < n; ++i) {
        cin >> h >> m;
        ++slots[h * 60 + m];
    }
    int mx = 0;
    for(int i = 0; i < 1440; ++i) {
        mx = max(mx, slots[i]);
    }
    cout << mx << endl;
    return 0;
}

