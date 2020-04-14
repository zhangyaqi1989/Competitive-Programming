/*
 * written by Yaqi Zhang
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
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        nums[i] = x;
    }
    sort(nums.begin(), nums.end());
    int ans = INF;
    int lo = nums.front(), hi = nums.back();
    for(int p = lo; p <= hi; ++p) {
        int cur = 0;
        for(int num : nums) cur += (p - num) * (p - num);
        ans = min(ans, cur);
    }
    cout << ans << "\n";

    return 0;
}

