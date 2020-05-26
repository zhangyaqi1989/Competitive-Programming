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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        int f;
        for(f = 2; f <= (int)sqrt(n); ++f) {
            if(n % f == 0) {
                break;
            }
        }
        if(n % f != 0) f = n;
        // if n is odd then f is odd
        if(n % 2) {
            cout << n + f + 2 * (k - 1) << endl;
        } else {
            cout << n + k * 2 << endl;
        }
    }
    return 0;
}

