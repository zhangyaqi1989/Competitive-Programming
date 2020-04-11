/*
 * written by Yaqi Zhang
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

bool check(const string & s, int lo, int hi) {
    while(lo < hi) {
        if(s[lo] != s[hi]) return false;
        ++lo;
        --hi;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    int valid = check(s, 0, n - 1) && check(s, 0, (n - 1)/2 - 1) && check(s, (n + 3)/2 - 1, n - 1);
    cout << (valid ? "Yes" : "No") << "\n";
    return 0;
}

