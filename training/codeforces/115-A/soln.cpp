/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;

vector<int> tree[2005];
vector<bool> visited(2005, false);


// return maximum levels in the tree
int dfs(int u, int parent) {
    visited[u] = true;
    int mx = 0;
    for(int v : tree[u]) {
        if(v != parent) {
            mx = max(mx, dfs(v, u));
        }
    }
    return mx + 1;
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> parents(n + 1, -1);
    for(int i = 1; i <= n; ++i) {
        int m;
        cin >> m;
        if(m != -1) {
            tree[m].push_back(i);
            tree[i].push_back(m);
            parents[i] = m;
        }
    }
    int mx = 0;
    for(int i = 1; i <= n; ++i) {
        if(!visited[i] && parents[i] == -1) {
            mx = max(dfs(i, -1), mx);
        }
    }
    cout << mx << endl;
    return 0;
}

