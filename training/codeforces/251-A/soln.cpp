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
    int n, d;
    cin >> n >> d;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    ll ans = 0LL;
    for(int i = 0; i < n - 2; ++i) {
        // does not exceed d
        int hi = nums[i] + d;
        int hi_idx = upper_bound(nums.begin(), nums.end(), hi) - nums.begin();
        int cnt = hi_idx - i - 1;
        if(cnt >= 2) ans += (ll) cnt * (cnt - 1) / 2;
    }
    cout << ans<< endl;
    return 0;
}

