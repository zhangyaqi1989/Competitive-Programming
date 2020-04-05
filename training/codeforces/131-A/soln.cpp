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

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    bool first = true, second = true;
    string new_s;
    int idx = 0;
    for(char ch : s) {
        if(idx == 0 && isupper(ch)) second = false;
        if(idx > 0 && islower(ch)) second = false;
        if(islower(ch)) {
            first = false;
            new_s += toupper(ch);
        }else {
            new_s += tolower(ch);
        }
        ++idx;
    }
    if(first || second) cout << new_s << endl;
    else cout << s << endl;
    return 0;
}

