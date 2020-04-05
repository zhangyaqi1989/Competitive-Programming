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
    int r = 0, c = 0;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            int num;
            cin >> num;
            if(num == 1) {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r - 2) + abs(c - 2) << endl;
    return 0;

}

