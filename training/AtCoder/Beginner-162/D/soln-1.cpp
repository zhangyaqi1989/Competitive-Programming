/*
 * written by Yaqi Zhang
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    for(char ch : s) {
        if(ch == 'R') ++r;
        else if(ch == 'G') ++g;
        else ++b;
    }
    long long ans = 1LL * r * g * b;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; 2 * j - i < n; ++j) {
            if(s[i] != s[j] && s[i] != s[2 * j - i] && s[j] != s[2 * j - i]) {
                --ans;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}

