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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n, a, b;
        cin >> n >> a >> b;
        string ans = "";
        for(int j = 0; j < n; ++j) {
            ans += (char) ('a' + (j % b));
        }
        cout << ans << endl;
    }
    return 0;

}

