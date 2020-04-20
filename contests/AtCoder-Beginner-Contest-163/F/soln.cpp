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

const int MAXN = 200005;
vector<int> tree[MAXN];
int colors[MAXN];
int counter[MAXN];
int depths[MAXN];
int subpaths[MAXN];
long long dp[MAXN];

// number of paths go from this node
int postorder(int u, int parent, int depth) {
    int ans = 1;
    depths[u] = depth;
    for(int v : tree[u]) {
        if(v != parent) {
            ans += postorder(v, u, depth + 1);
        }
    }
    dp[colors[u]] += ans;
    subpaths[u] = ans;
    return ans;
}

// number of paths come to this node



int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    memset(counter, 0, sizeof(counter));
    for(int i = 1; i <= n; ++i) {
        int c;
        cin >> c;
        colors[i] = c;
        ++counter[c];
    }
    for(int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    memset(dp, 0, sizeof dp);
    memset(depths, 0, sizeof depths);
    memset(subpaths, 0, sizeof subpaths);
    postorder(1, -1, 0);
    for(int i = 1; i <= n; ++i) {
        // cout << subpaths[i] << " " << depths[i] << endl;
        dp[colors[i]] += (long long) subpaths[i] * depths[i];
        // dp[colors[i]] -= (subpaths[i] - 1);
    }
    for(int i = 1; i <= n; ++i) {
        if(counter[i] > 0)
            dp[i] -= counter[i] * (counter[i] - 1) / 2;
    }
    for(int i = 1; i <= n; ++i) {
        cout << dp[i] << endl;
    }
    return 0;
}

