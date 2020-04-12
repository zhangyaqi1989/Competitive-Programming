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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 4000
    int n;
    cin >> n;
    string s;
    cin >> s;
    // 1 <= i < j < k <= N
    // j - i != k - j
    // triplets ...
    // RGB
    // subsequence
    // RRGB: RGB
    vector<vector<int>> idxes(3);
    for(int i = 0; i < n; ++i) {
        if(s[i] == 'R') idxes[0].push_back(i);
        else if(s[i] == 'G') idxes[1].push_back(i);
        else idxes[2].push_back(i);
    }
    long long ans = 0LL;
    for(int i = 0; i < 3; ++i) {
        int jj = (i + 1) % 3;
        int kk = 3 - i - jj;
        vector<int> js = {jj, kk};
        for(int j : js) {
            int k = 3 - i - j;
            for(int ia = 0; ia < (int) idxes[i].size(); ++ia) {
                int a = idxes[i][ia];
                auto itb = lower_bound(idxes[j].begin(), idxes[j].end(), a);
                int start_b = itb - idxes[j].begin();
                for(int ib = start_b; ib < (int) idxes[j].size(); ++ib) {
                    int b = idxes[j][ib];
                    auto itc = lower_bound(idxes[k].begin(), idxes[k].end(), b);
                    // need to know if exit ib - ia == ic - ib
                    ans += idxes[k].end() - itc;
                    auto it = lower_bound(itc, idxes[k].end(), 2 * b - a);
                    if (it != idxes[k].end() && (*it) == 2 * b - a) ans -= 1;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;

}

