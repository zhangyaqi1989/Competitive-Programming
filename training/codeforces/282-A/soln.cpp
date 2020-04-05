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
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;
        if(statement.find('+') != string::npos) ++x;
        else --x;
    }
    cout << x << endl;
    return 0;

}

