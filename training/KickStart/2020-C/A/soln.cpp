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
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int N, K;
        cin >> N >> K;
        vector<int> nums(N);
        for(int i = 0; i < N; ++i) cin >> nums[i];
        vector<int> dp(N, false);
        int cnt = 0;
        for(int i = 0; i < N; ++i) {
            if(nums[i] == K) dp[i] = true;
            else {
                if(i >= 1 && dp[i - 1] && nums[i - 1] - 1 == nums[i]) dp[i] = true;
                if(dp[i] && nums[i] == 1) ++cnt; 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

