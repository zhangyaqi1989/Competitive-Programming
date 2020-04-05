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
    string exp;
    cin >> exp;
    vector<int> nums;
    int n = exp.length();
    for(int i = 0; i < n; i += 2) {
        nums.push_back(exp[i] - '0');
    }
    sort(nums.begin(), nums.end());
    string ans;
    int m = nums.size();
    for(int i = 0; i < m; ++i) {
        ans += to_string(nums[i]);
        if(i != m - 1) ans += "+";
    }
    cout << ans << endl;
    return 0;

}

