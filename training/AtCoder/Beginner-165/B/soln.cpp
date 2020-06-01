/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long x;
    cin >> x;
    int cnt = 0;
    long long money = 100;
    while(money < x) {
        money += money / 100;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

