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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        map<int, int> counter;
        for(int j = 0; j < n; ++j) {
            int v;
            cin >> v;
            ++counter[v];
        }
        vector<int> nums;
        for(auto & p : counter) nums.push_back(p.second);
        sort(nums.begin(), nums.end());
        int mx = nums.back();
        int cnt = nums.size();
        if(mx <= cnt - 1) cout << mx << endl;
        // mx > cnt - 1
        else {
            if(mx - 1 == cnt - 1) cout << mx - 1 << endl;
            else cout << cnt << endl;
        }
    }
    return 0;

}

