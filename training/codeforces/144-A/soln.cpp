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
        int h;
        cin >> h;
        nums.push_back(h);
    }
    int mx_idx = -1;
    int mx = 0;
    for(int i = 0; i < n; ++i) {
        if(nums[i] > mx) {
            mx = nums[i];
            mx_idx = i;
        }
    }
    int cnt = 0;
    for(int i = mx_idx; i > 0; --i) {
        swap(nums[i], nums[i - 1]);
        ++cnt;
    }
    int mn_idx = n;
    int mn = 200;
    for(int i = n - 1; i >= 0; --i) {
        if(nums[i] < mn) {
            mn = nums[i];
            mn_idx = i;
        }
    }
    cnt += n - 1 - mn_idx;
    cout << cnt << endl;
    return 0;
}

