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
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>> dq;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        dq.emplace_back(i, num);
    }
    while(dq.size() > 1) {
        int idx = dq[0].first, need = dq[0].second;
        dq.pop_front();
        if(need > m) {
            dq.emplace_back(idx, need - m);
        }
    }
    cout << dq[0].first + 1 << endl;

    return 0;
}

