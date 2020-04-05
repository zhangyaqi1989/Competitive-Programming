/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

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
    vector<int> dp(n, 1);
    int mx = 1;
    for(int i = 1; i < n; ++i) {
        if(nums[i] >= nums[i - 1]){
            dp[i] = dp[i - 1] + 1;
            mx = max(mx, dp[i]);
        }
    }
    cout << mx << endl;
    return 0;
}

