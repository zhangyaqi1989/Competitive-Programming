/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> nums;
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
        nums.push_back(num);
    }
    sort(nums.rbegin(), nums.rend());
    int cur = 0;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cur += nums[i];
        ++cnt;
        if(cur > sum - cur) break;
    }
    cout << cnt << endl;
    return 0;

}

