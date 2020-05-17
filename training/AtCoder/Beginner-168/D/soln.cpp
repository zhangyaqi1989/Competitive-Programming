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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N + 1);
    for(int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int> frontier = {1};
    vector<int> costs(N + 1, INF);
    costs[1] = 0;
    vector<int> parents(N + 1, -1);
    while(!frontier.empty()) {
        vector<int> next_level;
        for(int u : frontier) {
            for(int v : graph[u]) {
                if(costs[v] > costs[u] + 1) {
                    costs[v] = costs[u] + 1;
                    next_level.push_back(v);
                    parents[v] = u;
                }
            }
        }
        swap(next_level, frontier);
    }
    // for(int i = 2; i <= N; ++i) cout << parents[i] << endl;
    if(any_of(parents.begin() + 2, parents.end(), [](int x) {return x == -1;})) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
        for(int i = 2; i <= N; ++i) {
            cout << parents[i] << endl;
        }
    }
    return 0;
}

