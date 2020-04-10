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
    int n, a;
    cin >> n >> a;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    --a;
    int d = 1;
    int ans = nums[a];
    while(a + d < n || a - d >= 0) {
        if(a + d < n && a - d >= 0) {
            int n_crimes = nums[a + d] + nums[a - d];
            if(n_crimes == 2) ans += 2;
        } else {
            if(a + d < n) ans += nums[a + d];
            if(a - d >= 0) ans += nums[a - d];
        }
        ++d;
    }
    cout << ans << endl;
    return 0;
}

