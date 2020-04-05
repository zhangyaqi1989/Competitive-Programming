/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (b >= a + 2) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

