/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, h;
    cin >> n >> h;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if(num <= h) ++ans;
        else ans += 2;
    }
    cout << ans << endl;
    return 0;
}

