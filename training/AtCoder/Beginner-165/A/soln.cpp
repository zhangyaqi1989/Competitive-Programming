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
    int k;
    cin >> k;
    int lo, hi;
    cin >> lo >> hi;
    int valid = false;
    for(int i = lo; i <= hi; ++i) {
        if(i % k == 0) {
            valid = true;
            break;
        }
    }
    cout << (valid ? "OK" : "NG") << endl;
    return 0;
}

