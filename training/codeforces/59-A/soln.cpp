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
    string s;
    cin >> s;
    int nlows = 0, ncaps = 0;
    string low, cap;
    for(char ch : s) {
        if(islower(ch)) ++nlows;
        else ++ncaps;
        low += tolower(ch);
        cap += toupper(ch);
    }
    if(ncaps > nlows) cout << cap << endl;
    else cout << low << endl;
    return 0;
}

