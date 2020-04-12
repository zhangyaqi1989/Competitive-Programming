/*
 * written by Yaqi Zhang
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

using namespace std;


int n, x, y;
const int N = 2e3 + 5;
vector<vector<int>> graph(N);
int counter[N];


void bfs(int start) {
    vector<int> frontier = {start};
    vector<int> level(n + 1, -1);
    level[start] = 0;
    while(!frontier.empty()) {
        vector<int> next_level;
        for(int u : frontier) {
            for(int v : graph[u]) {
                if(level[v] == -1 || level[v] > level[u] + 1) {
                    level[v] = level[u] + 1;
                    next_level.push_back(v);
                }
            }
        }
        swap(next_level, frontier);
    }
    for(int i = start + 1; i <= n; ++i) ++counter[level[i]];
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x >> y;
    memset(counter, 0, sizeof(counter));
    for(int i = 1; i <= n - 1; ++i) {
        graph[i].push_back(i + 1);
        graph[i + 1].push_back(i);
    }
    graph[x].push_back(y);
    graph[y].push_back(x);
    for(int u = 1; u <= n; ++u) bfs(u);
    for(int k = 1; k < n; ++k) {
        // do dfs on each vertex
        // and populate cost array
        cout << counter[k] << endl;
    }
    return 0;

}

