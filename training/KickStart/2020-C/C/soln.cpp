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
        int N;
        cin >> N;
        map<int, int> seen;
        seen.insert({0, 1});
        int cur = 0;
        // 100 * 100000
        // 4000 * 100000
        int mx = sqrt(100 * N);
        vector<int> cands;
        for(int r = 0; r <= mx; ++r) cands.push_back(r * r);
        long long cnt = 0;
        for(int i = 0; i < N; ++i) {
            int num;
            cin >> num;
            cur += num;
            for(int cand : cands) {
                auto it = seen.find(cur - cand);
                if(it != seen.end()) cnt += it->second;
            }
            ++seen[cur];
        }
        cout << cnt << endl;
    }
    return 0;
}

