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
    int n, m;
    cin >> n >> m;
    vector<int> lights(m);
    vector<int> ps(m);
    for(int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        int mask = 0;
        for(int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            --s;
            mask |= (1 << s);
            lights[i] = mask;
        }
    }
    for(int i = 0; i < m; ++i) cin >> ps[i];
    int cnt = 0;
    for(int state = 0; state < (1 << n); ++state) {
        int valid = true;
        for(int i = 0; i < m; ++i) {
            int ons = lights[i] & state;
            if(__builtin_popcount(ons) % 2 != ps[i]) {
                valid = false;
                break;
            }
        }
        if(valid) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

