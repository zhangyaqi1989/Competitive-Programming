/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int A[13][13];
int C[13];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, x;
    cin >> n >> m >> x;
    for(int i = 0; i < n; ++i) {
        cin >> C[i];
        for(int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }
    int best = INF;
    for(int mask = 0; mask < (1 << n); ++mask) {
        vector<int> gains(m, 0);
        int cur = 0;
        for(int i = 0; i < n; ++i) {
            if(mask & (1 << i)) {
                cur += C[i];
                for(int j = 0; j < m; ++j) {
                    gains[j] += A[i][j];
                }
            }
        }
        if(all_of(gains.begin(), gains.end(), [&](int a) {return a >= x;})) {
            best = min(best, cur);
        }
    }
    cout << (best == INF ? -1 : best) << endl;
    return 0;
    
}

