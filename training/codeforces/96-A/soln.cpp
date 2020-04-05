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
    bool bad = false;
    int lo = 0;
    s += "#";
    int n = s.length();
    for(int i = 0; i < n; ++i) {
        if (s[i] != s[lo]) {
            if(i - lo >= 7) {
                bad = true;
                break;
            }
            lo = i;
        }
    }
    cout << (bad ? "YES" : "NO") << endl;
    return 0;

}

