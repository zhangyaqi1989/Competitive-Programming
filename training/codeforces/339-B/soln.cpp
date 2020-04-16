/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
#include<iostream>
#include<map>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    long long ans = 0LL;
    int cur = 0;
    for(int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        --a;
        if(a >= cur) {
            ans += a - cur;
        } else {
            ans += n + (a - cur);
        }
        cur = a;
    }
    cout << ans << endl;
    return 0;
}

