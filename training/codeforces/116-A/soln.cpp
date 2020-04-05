/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int mx = 0, cur = 0;
    int a, b;
    for(int i = 0; i < n; ++i) {
        cin >> a >> b;
        cur += (b - a);
        mx = max(mx, cur);
    }
    cout << mx << endl;
    return 0;

}

