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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    if(k > 0) {
        ans += min(k, a);
        k -= min(k, a);
    }
    if(k > 0) {
        k -= min(k, b);
    }
    if(k > 0) {
        ans -= min(k, c);
    }
    cout << ans << endl;
    return 0;
    
}

