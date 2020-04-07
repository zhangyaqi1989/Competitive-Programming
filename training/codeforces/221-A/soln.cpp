/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;

vector<int> nums;

void func(int x) {
    if(x == 0) return;
    func(x - 1);
    swap(nums[x - 1], nums[x]);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    // implementation
    for(int i = 0; i < n; ++i) nums.push_back(i);
    func(n - 1);
    vector<int> ans(n);
    for(int i = 0; i < n; ++i) {
        ans[nums[i]] = i + 1;
    }
    for(int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

