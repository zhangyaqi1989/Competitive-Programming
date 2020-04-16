/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
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
    int mx_cnt = 0;
    int best_i = -1;
    for(int i = 0; i < n - 1; ++i) {
        int cnt = 0;
        for(int j = 0; j < n - 1; ++j) {
            if(s[j] == s[i] && s[j + 1] == s[i + 1]) ++cnt;
        }
        if(cnt > mx_cnt) {
            mx_cnt = cnt;
            best_i = i;
        }
    }
    cout << s[best_i] << s[best_i + 1] << endl;
    return 0;
}

