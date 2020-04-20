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


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> pairs;
    for(int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        pairs.emplace_back(a, i);
    }
    sort(pairs.rbegin(), pairs.rend());
    vector<bool> used(n + 1, false);
    long long ans = 0LL;
    for(auto & p : pairs) {
        int value = p.first, idx = p.second;
        int best = 0, best_idx = -1;
        for(int i = 1; i <= n; ++i) {
            if(!used[i] && abs(i - idx) >= best) {
                best = abs(i - idx);
                best_idx = i;
            }
        }
        // cout << idx << " " << best_idx << endl;
        ans += (long long) best * value;
        used[best_idx] = true;
    }
    cout << ans << endl;
    return 0;

}

