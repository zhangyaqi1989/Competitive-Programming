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

int N, M;

vector<vector<int>> graph;
int dp[100005];

int dfs(int u) {
    if(dp[u] != -1) return dp[u];
    int ans = 0;
    for(int v : graph[u]) {
        ans = max(ans, dfs(v) + 1);
    }
    dp[u] = ans;
    return ans;
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(dp, -1, sizeof dp);
    cin >> N >> M;
    graph.resize(N + 1);
    int u, v;
    for(int i = 0; i < M; ++i) {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    int mx = 0;
    for(int u = 1; u <= N; ++u) {
        mx = max(mx, dfs(u));
    }
    cout << mx << endl;
    return 0;

}

