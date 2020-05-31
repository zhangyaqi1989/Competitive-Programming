/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int L, R;
    cin >> L >> R;
    for(int i = 1; i < m; ++i) {
        int nxt_L, nxt_R;
        cin >> nxt_L >> nxt_R;
        if (L > nxt_R || nxt_L > R) {
            cout << 0 << endl;
            return 0;
        }
        L = max(L, nxt_L);
        R = min(R, nxt_R);
    }
    cout << R - L + 1 << endl;
    return 0;
    
}

