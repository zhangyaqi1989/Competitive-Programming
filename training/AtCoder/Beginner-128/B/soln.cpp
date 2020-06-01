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
    vector<string> cities(n);
    vector<int> scores(n);
    vector<int> idxes(n);
    for(int i = 0; i < n; ++i) {
        idxes[i] = i;
        cin >> cities[i] >> scores[i];
    }
    sort(idxes.begin(), idxes.end(), [&](int a, int b) {
            return cities[a] == cities[b] ? scores[a] > scores[b] : cities[a] < cities[b];});
    for(int idx : idxes) cout << idx + 1 << endl;
    return 0;
}

