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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int num, k;
        // try odd
        cin >> num >> k;
        if(k <= num && (num - k) % 2 == 0) {
            cout << "YES" << endl;
            for(int j = 0; j < k; ++j) {
                if(j == 0) cout << 1 + (num - k);
                else cout << 1;
                if(j + 1 < k) cout << " ";
            }
            cout << endl;
        } else if (2 * k <= num && (num - 2 * k) % 2 == 0) {
            cout << "YES" << endl;
            for(int j = 0; j < k; ++j) {
                if(j == 0) cout << 2 + (num - 2 * k);
                else cout << 2;
                if(j + 1 < k) cout << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

