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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    // exact k elements <= x
    sort(nums.begin(), nums.end());
    int lo = 1, hi = nums.back() + 1;
    while(lo < hi) {
        int mid = lo + (hi - lo) / 2;
        // check how many elements <= mid
        auto it = lower_bound(nums.begin(), nums.end(), mid + 1);
        int cnt = it - nums.begin();
        if(cnt < k) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    cout << (lower_bound(nums.begin(), nums.end(), lo + 1) - nums.begin() == k ? lo : -1) << endl;

    return 0;
}

