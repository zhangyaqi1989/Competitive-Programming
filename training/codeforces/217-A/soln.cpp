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

const int N = 105;

int xs[N];
int ys[N];
int parents[N];
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
    int n;
    cin >> n;
    n_components = n;
    for(int i = 0; i < n; ++i) {
        parents[i] = i;
        int x, y;
        cin >> x >> y;
        xs[i] = x;
        ys[i] = y;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(xs[i] == xs[j] || ys[i] == ys[j]) {
                unite(i, j);
            }
        }
    }

    cout << n_components - 1 << endl;

    return 0;

}

