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
    int k;
    cin >> k;
    vector<int> nums(12, 0);
    for(int i = 0; i < 12; ++i) {
        int num;
        cin >> num;
        nums[i] = num;
    }
    if(k == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(nums.rbegin(), nums.rend());
    int cur = 0;
    for(int i = 0; i < 12; ++i) {
        cur += nums[i];
        if(cur >= k) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

