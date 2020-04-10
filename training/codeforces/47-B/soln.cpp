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
    int order[3] = {0};
    string s;
    for(int i = 0; i < 3; ++i) {
        cin >> s;
        if(s[1] == '>') order[s[0] - 'A']++;
        else order[s[2] - 'A']++;
    }
    if(order[0] == order[1] || order[2] == order[1] || order[2] == order[0])
        cout << "Impossible" << endl;
    else {
        string ans = "AAA";
        for(int i = 0; i < 3; ++i) {
            ans[order[i]] = (char)('A' + i);
        }
        cout << ans << endl;
    }
    return 0;
}

