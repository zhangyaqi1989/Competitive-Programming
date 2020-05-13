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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        deque<int> nums(n);
        for(int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            nums[j] = num;
        }
        int a = nums[0], b = 0;
        nums.pop_front();
        int pre = a;
        int end = 1;
        int cnt = 1;
        while(!nums.empty()) {
            ++cnt;
            int cur = 0;
            if(end == 1) {
                while(!nums.empty() && cur <= pre) {
                    cur += nums.back();
                    nums.pop_back();
                }
            } else {
                while(!nums.empty() && cur <= pre) {
                    cur += nums.front();
                    nums.pop_front();
                }
            }
            if(end == 1) b += cur;
            else a += cur;
            end ^= 1;
            pre = cur;
        }
        cout << cnt << " " << a << " " << b << endl;
    }
    return 0;
}

