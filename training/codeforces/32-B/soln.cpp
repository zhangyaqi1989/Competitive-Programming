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
    string code;
    cin >> code;
    int n = code.length();
    int i = 0;
    string ans;
    for(int i = 0; i < n; ) {
        if(code[i] == '.') ans += '0';
        else {
            if(code[i + 1] == '-') ans += '2';
            else ans += '1';
            ++i;
        }
        ++i;
    }
    cout << ans << endl;
    return 0;
}

