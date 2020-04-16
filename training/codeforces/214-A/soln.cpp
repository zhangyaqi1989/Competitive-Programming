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
    int cnt = 0;
    for(int a = 0; a * a <= n; ++a) {
        int b = n - a * a;
        if(a + b * b == m) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

