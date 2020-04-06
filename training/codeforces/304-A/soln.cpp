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
    int cnt = 0;
    for(int a = 1; a <= n; ++a) {
        for(int b = a; b <= n; ++b) {
            int c = (int) sqrt(a * a + b * b);
            if(c <= n && a * a + b * b == c * c) ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}

