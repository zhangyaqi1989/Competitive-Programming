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
    int n;
    cin >> n;
    vector<int> nums;
    ll sum = 0LL;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
        nums.push_back(num);
    }
    if(sum % 3 == 0) {
        ll ans = 0LL;
        int cnt = 0;
        ll cur = 0;
        ll left = sum / 3;
        ll right = sum - left;
        for(int i = 0; i < n - 1; ++i) {
            cur += nums[i];
            if(cur == right) ans += cnt;
            if(cur == left) ++cnt;
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}

