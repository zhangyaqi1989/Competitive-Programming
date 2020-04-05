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
    int cur = n + 1;
    while(true) {
        string str = to_string(cur);
        set<char> chars(str.begin(), str.end());
        if(chars.size() == str.length()) break;
        ++cur;
    }
    cout << cur << endl;
    return 0;
}

