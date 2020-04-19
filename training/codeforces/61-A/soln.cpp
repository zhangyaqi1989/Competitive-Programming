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
    string a, b;
    cin >> a >> b;
    int n = a.length();
    string ans;
    for(int i = 0; i < n; ++i) {
        if(a[i] == b[i]) ans += '0';
        else ans += '1';
    }
    cout << ans << endl;
    return 0;

}

