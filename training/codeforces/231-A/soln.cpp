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
    int cnt = 0;
    int a, b, c;
    for(int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) ++cnt;
    }
    cout << cnt << endl;
    return 0;

}

