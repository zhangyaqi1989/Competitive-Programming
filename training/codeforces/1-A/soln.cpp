/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a;
    cin >> n >> m >> a;
    // number of squares to cover n * m
    int x = (n + a - 1) / a;
    int y = (m + a - 1) / a;
    cout << (long long) x * y << endl;
    return 0;

}

