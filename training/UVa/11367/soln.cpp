/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


const int MAXN = 1005;

vector<pair<int, int>> graph[MAXN];
int prices[MAXN];
int dist[MAXN][105];

int dijkstra(int c, int s, int e) {
    memset(dist, INF, sizeof dist);
    dist[s][0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int R = 105;
    // start from s, 0
    pq.push({0, s * R + 0});
    while(!pq.empty()) {
        auto node = pq.top();
        pq.pop();
        int d = node.first, u = node.second / R, level = node.second % R;
        if (u == e) return d;
        if (d > dist[u][level]) continue;
        // move to a different city without fill
        for(auto nei : graph[u]) {
            int v = nei.first, w = nei.second;
            if(level >= w && d < dist[v][level - w]) {
                dist[v][level - w] = d;
                pq.push({d, v * R + level - w});
            }
        }
        // fill one unit of oil
        if (level + 1 <= c && d + prices[u] < dist[u][level + 1]) {
            dist[u][level + 1] = d + prices[u];
            pq.push({d + prices[u], u * R + level + 1});
        }
    }
    return -1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    for(int i = 0; i < m; ++i) {
        int u, v, d;
        cin >> u >> v >> d;
        graph[u].emplace_back(v, d);
        graph[v].emplace_back(u, d);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i) {
        int c, s, e;
        cin >> c >> s >> e;
        int d = dijkstra(c, s, e);
        if (d == -1) cout << "impossible\n";
        else cout << d << "\n";
    }
    return 0;
}

