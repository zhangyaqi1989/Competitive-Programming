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
    int k;
    string s;
    cin >> k >> s;
    int n = s.length();
    if(n <= k) cout << s;
    else cout << s.substr(0, k) + "...";
    cout << endl;
    return 0;
    
}

