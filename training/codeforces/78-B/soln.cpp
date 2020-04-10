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
    int n;
    cin >> n;
    string ans(n, 'A');
    ans[0] = 'R';
    ans[1] = 'O';
    ans[2] = 'Y';
    ans[3] = 'G';
    ans[n - 1] = 'V';
    ans[n - 2] = 'I';
    ans[n - 3] = 'B';
    for(int i = 4; i < n - 3; ++i) ans[i] = ans[i - 4];
    cout << ans << endl;
    return 0;
}

