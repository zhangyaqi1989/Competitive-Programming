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
    int x;
    int a = 0;
    for(int i = 0; i < 3; ++i) {
        cin >> x;
        a += x;
    }
    int b = 0;
    for(int i = 0; i < 3; ++i) {
        cin >> x;
        b += x;
    }
    int n;
    cin >> n;
    if (n >= (a + 4) / 5 + (b + 9) / 10) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

