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
        vector<int> nums(n);
        vector<int> pre = {0};
        map<int, int> counter;
        for(int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            nums[j] = num;
            ++counter[num];
            pre.push_back(num + pre.back());
        }
        int cnt = 0;
        for(int j = 1; j <= n; ++j) {
            for(int k = 0; k < j - 1; ++k) {
                int val = pre[j] - pre[k];
                auto it = counter.find(val);
                if(it != counter.end()) {
                    cnt += it->second;
                    counter.erase(it);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

