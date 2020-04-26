/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<unordered_map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;
typedef long long ll;

const int MAXN = 53;

int N, M, S;
vector<tuple<int, int, int>> graph[MAXN];
int cs[MAXN];
int ds[MAXN];

long long dijkstra(int start, int end) {
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, S * MAXN + start});
    vector<vector<ll>> dist(MAXN, vector<ll>(2505, -1LL));
    dist[start][S] = 0;
    while(!pq.empty()) {
        auto p = pq.top();
        pq.pop();
        ll t = p.first;
        int u = p.second % MAXN;
        int s = p.second / MAXN;
        if(u == end) return t;
        if(t < dist[u][s]) continue;
        for(auto & nei : graph[u]) {
            int v = get<0>(nei);
            int a = get<1>(nei);
            int b = get<2>(nei);
            if (s >= a) {
                if(dist[v][s - a] == -1 || dist[v][s - a] > t + b) {
                    dist[v][s - a] = t + b;
                    pq.push({t + b, (s - a) * MAXN + v});
                }
            }
        }
        int c = cs[u];
        int d = ds[u];
        if (s + c <= 2500) {
            if(dist[u][s + c] == -1 || dist[u][s + c] > t + d) {
                dist[u][s + c] = t + d;
                pq.push({t + d, (s + c) * MAXN + u});
            }
        }
    }
    return -1;
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M >> S;
    S = min(S, 50 * 50);
    for(int i = 0; i < M; ++i) {
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        graph[u].emplace_back(v, a, b);
        graph[v].emplace_back(u, a, b);
    }
    for(int i = 0; i < N; ++i) {
        int c, d;
        cin >> c >> d;
        cs[i + 1] = c;
        ds[i + 1] = d;
    }
    for(int i = 2; i <= N; ++i) {
        cout << dijkstra(1, i) << endl;
    }
    return 0;

}

