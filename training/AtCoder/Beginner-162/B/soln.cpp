/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

// #include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long ans = 0LL;
    for(int i = 1; i <= n; ++i) {
        if(i % 3 != 0 && i % 5 != 0) ans += i;
    }
    cout << ans << endl;
    return 0;

}

