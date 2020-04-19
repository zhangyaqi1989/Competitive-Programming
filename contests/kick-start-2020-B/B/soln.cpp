/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int n;
        long long D;
        cin >> n >> D;
        vector<long long> nums(n);
        for(long long & num : nums) cin >> num;
        // How to check if there is a val >= mid that val % num == 0
        long long lo = 1, hi = D;
        while(lo < hi) {
            long long mid = hi - (hi - lo) / 2;
            bool valid = true;
            long long pre = mid;
            for(auto num : nums) {
                if(pre % num != 0 && D / num == pre / num) {
                    valid = false;
                    break;
                } else {
                    if (pre % num != 0) {
                        pre = (pre / num + 1) * num;
                    }
                }
            }
            // cout << mid << " " << valid << endl;
            if(valid) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }
        cout << lo << endl;
    }
    return 0;

}

