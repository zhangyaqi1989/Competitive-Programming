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
    long long k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A[i] = x - 1;
    }
    vector<int> memo(n, -1);
    int idx = 0;
    int cur_step = 0;
    while(k-- > 0) {
        // cout << idx + 1 << endl;
        if(memo[idx] != -1) {
            // period
            int period = cur_step - memo[idx];
            k %= period;
        }
        memo[idx] = cur_step;
        idx = A[idx];
        ++cur_step;
    }
    cout << idx + 1 << endl;
    return 0;
    
}

