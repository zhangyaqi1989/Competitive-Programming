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
    int n, l;
    cin >> n >> l;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    double mx = max(*nums.begin(), l - nums.back());
    for(int i = 1; i < n; ++i) {
        mx = max(mx, ((double) nums[i] - nums[i - 1]) / 2);
    }
    // cout << mx << endl;
    printf("%.9lf\n", mx);
    return 0;
}

