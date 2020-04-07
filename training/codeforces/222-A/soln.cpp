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
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    bool valid = all_of(nums.begin() + k - 1, nums.end(), [&](int num) {return num == nums[k - 1];});
    if(!valid) cout << -1 << endl;
    else {
        int idx = -1;
        for(int i = 0; i < k; ++i) {
            if(nums[i] != nums[k - 1]) idx = i;
        }
        cout << idx + 1 << endl;
    }
    return 0;
}

