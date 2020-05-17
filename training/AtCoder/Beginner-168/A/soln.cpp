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
    int d = n % 10;
    if(d == 3) cout << "bon";
    else if (d == 0 || d == 1 || d == 6 || d == 8) cout << "pon";
    else cout << "hon";
    cout << endl;
    return 0;
    
}

