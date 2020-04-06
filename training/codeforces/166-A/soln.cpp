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
    vector<pair<int, int>> scores;
    for(int i = 0; i < n; ++i) {
        int p, t;
        cin >> p >> t;
        scores.emplace_back(-p, t);
    }
    sort(scores.begin(), scores.end());
    auto score = scores[k - 1];
    auto bounds = equal_range(scores.begin(), scores.end(), score);
    cout << bounds.second - bounds.first << endl;

    return 0;
}

