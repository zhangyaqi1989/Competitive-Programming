/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    // [1, n], [1, k - 1] and a die
    // no tail up
    double prob = 0.0;
    for(int i = 1; i <= n; ++i) {
        double cur = 1.0 / n;
        int j = i;
        while(j < k) {
            cur *= 0.5;
            j <<= 1;
        }
        prob += cur;
    }
    cout << setprecision(10);
    cout << prob << endl;
    return 0;
    
}

