/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int Gcd(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for(int a = 1; a <= n; ++a)
        for(int b = 1; b <= n; ++b)
            for(int c = 1; c <= n; ++c) 
                ans += Gcd(a, b, c);
    cout << ans << endl;
    return 0;

}

