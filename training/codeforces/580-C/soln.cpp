/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

int n, m;

vector<int> vals(100000);
vector<vector<int>> tree(100000);
int ans = 0;

// DFS
void dfs(int node, int parent, int mx, int path) {
    if(vals[node] == 0) {
        path = 0;
    } else {
        ++path;
        mx = max(mx, path);
    }
    if(tree[node].size() == 1 && tree[node][0] == parent) {
        if(mx <= m){
            // cout << node << endl;
            ++ans;
        }
    }
    for(int nei : tree[node]) {
        if(nei != parent) dfs(nei, node, mx, path);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        vals[i] = val;
    }

    for(int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(0, -1, 0, 0);
    cout << ans << endl;
    return 0;
}
