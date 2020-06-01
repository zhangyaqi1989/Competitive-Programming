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
    int n, k;
    cin >> n >> k;
    vector<int> snacks(n + 1, 0);
    for(int i = 0; i < k; ++i) {
        int d;
        cin >> d;
        for(int j = 0; j < d; ++j) {
            int id;
            cin >> id;
            ++snacks[id];
        }
    }
    int cnt = 0;
    for(int id = 1; id <= n; ++id) cnt += snacks[id] == 0;
    cout << cnt << endl;
    return 0;
}

