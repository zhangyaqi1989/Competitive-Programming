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
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<int> ps(A), qs(B), rs(C);

    for(int i = 0; i < A; ++i) {
        int x;
        cin >> x;
        ps[i] = x;
    }

    for(int i = 0; i < B; ++i) {
        int x;
        cin >> x;
        qs[i] = x;
    }

    for(int i = 0; i < C; ++i) {
        int x;
        cin >> x;
        rs[i] = x;
    }

    sort(ps.rbegin(), ps.rend());
    sort(qs.rbegin(), qs.rend());
    sort(rs.rbegin(), rs.rend());

    // can use C
    // How many C needed?
    // not DP
    // greedy?
    long long best = 0LL;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < X; ++i){
        pq.push(ps[i]);
        best += ps[i];
    }

    for(int i = 0; i < Y; ++i){
        pq.push(qs[i]);
        best += qs[i];
    }

    long long cur = best;
    for(int i = 0; i < min(X + Y, C); ++i) {
        pq.push(rs[i]);
        cur += rs[i];
        cur -= pq.top();
        pq.pop();
        best = max(best, cur);
    }
    cout << best << endl;
    return 0;
}
