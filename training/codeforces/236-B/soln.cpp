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
    int a, b, c;
    cin >> a >> b >> c;
    // vector<int> d(1000001, 0);
    int d[1000001];
    memset(d, 0, sizeof(d));
    for(int i = 1; i <= 1000000; ++i) {
        for(int j = i; j <= 1000000; j+=i) {
            ++d[j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= a; ++i) {
        for(int j = 1; j <= b; ++j) {
            for(int k = 1; k <= c; ++k) {
                ans = (ans + d[i * j * k]) % (1 << 30);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

