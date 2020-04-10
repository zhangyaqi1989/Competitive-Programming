/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
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
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> pairs;
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        pairs.emplace_back(b, a);
    }
    sort(pairs.begin(), pairs.end(), [](const pair<int, int> & a, const pair<int, int> & b) {
            return a.first > b.first;});
    int ans = 0;
    int idx = 0;
    while(n > 0 && idx < m) {
        int b = pairs[idx].first, a = pairs[idx].second;
        ans += min(n, a) * b;
        n -= min(a, n);
        ++idx;
    }
    cout << ans << endl;
    return 0;
}

