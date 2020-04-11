/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
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
    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    int cnt = 0;
    double pos = t * vp;
    if(vd < vp) cout << 0 << endl;
    else {
        while(pos < c) {
            // compute meet point
            // (x - pos) / vp = x / vd
            double x = pos / (1 - (double) vp/vd);
            if (x >= c) break;
            else {
                ++cnt;
                // return to the cave
                double dt = f + x / vd;
                pos = x + dt * vp;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
