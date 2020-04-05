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
    //
    int k, n, w;
    // k (1 + w) * w / 2
    cin >> k >> n >> w;
    int need = k * (1 + w) * w / 2;
    cout << (need > n ? need - n : 0) << endl;
    return 0;

}

