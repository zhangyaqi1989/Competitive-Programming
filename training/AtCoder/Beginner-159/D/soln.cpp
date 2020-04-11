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
    int n;
    cin >> n;
    unordered_map<int, int> counter;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A[i] = x;
        ++counter[x];
    }
    long long total = 0LL;
    for(auto & p : counter) {
        long long cnt = p.second;
        total += cnt * (cnt - 1) / 2;
    }
    for(int i = 0; i < n; ++i) {
        long long cnt = counter[A[i]];
        long long ans = total - cnt * (cnt - 1) / 2;
        --cnt;
        if(cnt >= 1) ans += cnt * (cnt - 1) / 2;
        cout << ans << "\n";
    }
    return 0;
}

