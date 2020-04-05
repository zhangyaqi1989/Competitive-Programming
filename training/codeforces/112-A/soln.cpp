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
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for(int i = 0; i < n; ++i) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if(c1 < c2) {
            cout << -1 << endl;
            return 0;
        } else if (c1 > c2) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;

}

