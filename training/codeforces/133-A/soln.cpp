/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    bool valid = false;
    for(char ch : s) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            valid = true;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
    return 0;

}

