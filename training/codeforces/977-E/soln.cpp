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
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

const int N = 2e5 + 5;

int parents[N];
int sizes[N];
vector<vector<int>> graph(N);
int degrees[N];

int find(int x) {
    return parents[x] == x ? x : (parents[x] = find(parents[x]));
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    scanf("%d %d", &n, &m);
    memset(degrees, 0, sizeof degrees);
    for(int i = 0; i <= n; ++i) {
        parents[i] = i;
        sizes[i] = 1;
        graph[i].clear();
    }
    for(int i = 0; i < m; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        int ru = find(u), rv = find(v);
        graph[u].push_back(v);
        graph[v].push_back(u);
        ++degrees[u];
        ++degrees[v];
        if(ru != rv) {
            if(sizes[ru] > sizes[rv]) {
                int temp = ru;
                ru = rv;
                rv = temp;
            }
            sizes[rv] += sizes[ru];
            parents[ru] = rv;
        }
    }
    int cnt = 0;
    map<int, bool> is_circles;
    for(int i = 1; i <= n; ++i) {
        int ri = find(i);
        if(is_circles.find(ri) == is_circles.end()) {
            is_circles[ri] = true;
        }
        if(degrees[i] != 2) is_circles[ri] = false;
    }
    for(auto & p : is_circles) {
        if(p.second) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

