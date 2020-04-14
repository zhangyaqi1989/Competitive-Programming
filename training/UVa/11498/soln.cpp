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


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int x0, y0;
    int x, y;
    while(cin >> n) {
        cin >> x0 >> y0;
        for(int i = 0; i < n; ++i) {
            cin >> x >> y;
            x -= x0;
            y -= y0;
            if (x == 0 || y == 0) cout << "divisa";
            else if (x > 0) {
                if(y > 0) cout << "NE";
                else cout << "SE";
            } else {
                if(y > 0) cout << "NO";
                else cout << "SO";
            }
            cout << endl;
        }
    }
    return 0;

}

