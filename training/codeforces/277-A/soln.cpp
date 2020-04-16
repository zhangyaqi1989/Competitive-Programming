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

int parents[101];
int knows[101];
int n_components;

int find(int x) {
    return parents[x] == x ? x : (parents[x] = find(parents[x]));
}

void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if(rx != ry) {
        --n_components;
        parents[rx] = ry;
    }
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // add edge to make it connected
    int n, m;
    cin >> n >> m;
    vector<int> idxes(m + 1, -1);
    for(int i = 0; i < n; ++i) parents[i] = i;
    n_components = n;
    bool known = false;
    for(int i = 0; i < n; ++i) {
        int cnt;
        cin >> cnt;
        if(cnt) known = true;
        for(int j = 0; j < cnt; ++j) {
            int c;
            cin >> c;
            if(idxes[c] != -1) {
                // unite idxes[c] and i
                unite(idxes[c], i);
            } else {
                idxes[c] = i;
            }
        }
    }
    if(n_components == 1) cout << 0 << endl;
    else {
        if(known) cout << n_components - 1 << endl;
        else cout << n_components << endl;
    }
    return 0;

}

