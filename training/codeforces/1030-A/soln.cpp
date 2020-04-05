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
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    bool is_hard = false;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(a == 1) is_hard = true;
    }
    if(is_hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}

