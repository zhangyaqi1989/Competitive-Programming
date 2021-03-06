/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

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
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    ll ans = 0LL;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; ++i) {
        ans += abs(i + 1 - nums[i]);
    }
    cout << ans << endl;
    return 0;
}

