/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r, D, x;
    cin >> r >> D >> x;
    for(int i = 0; i < 10; ++i) {
        x = r * x - D;
        cout << x << endl;
    }
    return 0;
    
}

