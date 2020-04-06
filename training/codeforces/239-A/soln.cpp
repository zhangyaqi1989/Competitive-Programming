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
    int y, k, n;
    cin >> y >> k >> n;
    // x + y <= n
    // (x + y) % k == 0
    int cnt = 0;
    int total = k;
    if(total < y + 1) total += (y + 1 - total + k - 1) / k * k;
    while(total <= n) {
        cout << total - y << " ";
        total += k;
        ++cnt;
    }
    if(cnt == 0) cout << -1;
    cout << endl;
    return 0;
}

