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
    string s1, s2, s;
    cin >> s1 >> s2 >> s;
    string s12 = s1 + s2;
    sort(s12.begin(), s12.end());
    sort(s.begin(), s.end());
    cout << (s == s12 ? "YES" : "NO") << endl;
    return 0;
}

