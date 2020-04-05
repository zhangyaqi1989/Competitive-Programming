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
    ll n;
    cin >> n;
    int cnt = 0;
    do {
        int d = n % 10;
        if(d == 4 || d == 7) ++cnt;
        n /= 10;
    } while(n);
    bool valid = true;
    do {
        int d = cnt % 10;
        if(d != 4 && d != 7) {
            valid = false;
            break;
        }
        cnt /= 10;
    } while(cnt);
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

