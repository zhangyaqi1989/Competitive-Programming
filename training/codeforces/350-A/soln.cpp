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
    vector<int> A, B;
    int num;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        A.push_back(num);
    }
    for(int i = 0; i < m; ++i) {
        cin >> num;
        B.push_back(num);
    }
    // v >= max(A)
    // v >= 2 * min(A)
    // v < min(B)
    auto [mn, mx] = minmax_element(A.begin(), A.end());
    int lo = max(2 * (*mn), *mx);
    int hi = *min_element(B.begin(), B.end()) - 1;
    if(hi >= lo) cout << lo << endl;
    else cout << -1 << endl;

    return 0;
}

