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
    int T;
    cin >> T;
    for(int i = 1; i <= T; ++i) {
        cout << "Case " << i << ": ";
        int n;
        cin >> n;
        int mx = 0;
        for(int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            mx = max(mx, num);
        }
        cout << mx << endl;
    }
    return 0;
}

