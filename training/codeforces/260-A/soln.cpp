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
    int a, b, n;
    cin >> a >> b >> n;
    --n;
    for(int i = 0; i <= 9; ++i) {
        if((a * 10 + i) % b == 0) {
            a = a * 10 + i;
            break;
        }
    }
    if(a % b != 0) {
        cout << -1 << endl;
    } else {
        cout << to_string(a) + string(n, '0') << endl;
    }
    return 0;
}

