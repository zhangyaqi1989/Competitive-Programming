/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
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
    char last = '0';
    for(int i = 0; i < n; ++i) {
        string mg;
        cin >> mg;
        if(i == 0 || mg[0] == last) ++cnt;
        last = mg[1];
    }
    cout << cnt << endl;
    return 0;
}

