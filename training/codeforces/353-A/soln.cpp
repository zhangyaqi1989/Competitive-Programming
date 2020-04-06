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
    int nunbalanced = 0;
    int up = 0, down = 0;
    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        up += a;
        down += b;
        if (a % 2 != b % 2) ++nunbalanced;
    }
    if(up % 2 == 0 && down % 2 == 0) cout << 0 << endl;
    else if(up % 2 == 1 && down % 2 == 1) {
        if(nunbalanced) cout << 1 << endl;
        else cout << -1 << endl;
    } else cout << -1 << endl;
    return 0;
}

