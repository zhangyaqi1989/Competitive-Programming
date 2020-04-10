/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
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
    string s;
    cin >> s;
    if(s.length() == 1) cout << 0 << endl;
    else {
        int cnt = 1;
        int num = 0;
        for(char ch : s) num += ch - '0';
        while(num > 9) {
            int new_num = 0;
            while(num) {
                int d = num % 10;
                num /= 10;
                new_num += d;
            }
            num = new_num;
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}

