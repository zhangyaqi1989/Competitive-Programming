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
    int n;
    cin >> n;
    multiset<int> s;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        s.insert(num);
    }
    while(true) {
        int lo = *s.begin();
        int hi = *s.rbegin();
        if (hi - lo <= 1) break;
        s.erase(s.begin());
        s.erase(--s.end());
        s.insert(++lo);
        s.insert(--hi);
    }
    int n_lows = 0;
    int lo = *s.begin();
    for(auto it = s.begin(); it != s.end(); ++it) {
        // cout << *it << endl;
        if(*it == lo) ++n_lows;
        else break;
    }
    cout << max(n - n_lows, n_lows) << endl;

    return 0;
}

