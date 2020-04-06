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
    vector<int> idxes(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        idxes[num] = i;
    }
    int m;
    cin >> m;
    ll v = 0LL, p = 0LL;
    for(int i = 0; i < m; ++i) {
        int query;
        cin >> query;
        int idx = idxes[query];
        v += idx + 1;
        p += n - idx;
    }
    cout << v << " " << p << endl;
    return 0;
}

