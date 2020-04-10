/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<deque>
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
    string s;
    cin >> s;
    deque<char> dq;
    int i = 0;
    for(char ch : s) {
        if(n % 2 == 1) {
            if(i & 1) dq.push_front(ch);
            else dq.push_back(ch);
        } else {
            if(i & 1) dq.push_back(ch);
            else dq.push_front(ch);
        }
        ++i;
    }
    string ans;
    while(!dq.empty()) {
        char ch = dq.front();
        dq.pop_front();
        ans += ch;
    }
    cout << ans << endl;
    return 0;
}

