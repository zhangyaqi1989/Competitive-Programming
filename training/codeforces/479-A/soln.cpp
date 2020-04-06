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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(a + b + c, a * b * c);
    ans = max(ans, a + b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * b + c);
    ans = max(ans, a * (b + c));
    cout << ans << endl;
    return 0;
}

