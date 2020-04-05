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
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    int dx, dy, dz;
    for(int i = 0; i < n; ++i) {
        cin >> dx >> dy >> dz;
        x += dx;
        y += dy;
        z += dz;
    }
    puts((x == 0 && y == 0 && z == 0) ? "YES" : "NO");
    cout << endl;
    return 0;

}

