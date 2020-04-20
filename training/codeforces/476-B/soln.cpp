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
    string s1, s2;
    cin >> s1 >> s2;
    int target = 0;
    for(int ch : s1) target += (ch == '+' ? 1 : -1);
    int cnt = count(s2.begin(), s2.end(), '?');
    if (cnt == 0) {
        int x = 0;
        for(int ch : s2) x += (ch == '+' ? 1 : -1);
        if (x == target) printf("%0.9lf\n", 1.0);
        else printf("%0.9lf\n", 0.0);
    } else {
        int hit = 0;
        for(int state = 0; state < (1 << cnt); ++state) {
            int idx = 0;
            int x = 0;
            for(int ch : s2) {
                if (ch == '?') {
                    if(state & (1 << idx)) ch = '+';
                    else ch = '-';
                    ++idx;
                }
                x += (ch == '+' ? 1 : -1);
            }
            if(x == target) ++hit;
        }
        printf("%0.9lf\n", (double) hit / (1 << cnt));
    }
    return 0;
}

