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
#include<numeric>
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
    int s, n;
    cin >> s >> n;
    vector<int> xs(n), ys(n);
    for(int i = 0; i < n; ++i) {
        cin >> xs[i];
        cin >> ys[i];
    }
    vector<int> idxes(n);
    iota(idxes.begin(), idxes.end(), 0);
    sort(idxes.begin(), idxes.end(), [&](int a, int b) {
            return xs[a] < xs[b];});
    for(int idx : idxes) {
        int x = xs[idx], y = ys[idx];
        if(s > x) {
            s += y;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

