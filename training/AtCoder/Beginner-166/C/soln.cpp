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
    vector<int> hs(n);
    for(int i = 0; i < n; ++i) cin >> hs[i];
    vector<int> highest_neighbors(n, -1);
    for(int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        highest_neighbors[u] = max(highest_neighbors[u], hs[v]);
        highest_neighbors[v] = max(highest_neighbors[v], hs[u]);
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(highest_neighbors[i] == -1 || highest_neighbors[i] < hs[i]) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

