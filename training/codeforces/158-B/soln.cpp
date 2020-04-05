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
    int one = 0, two = 0, three = 0, four = 0;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num == 1) ++one;
        else if (num == 2) ++two;
        else if (num == 3) ++three;
        else ++four;
    }
    int ans = three + four;
    one -= min(three, one);
    ans += (two + 1) / 2;
    if(two % 2 == 1) {
        // has two slots
        one -= min(one, 2);
    }
    if(one) ans += (one + 3) / 4;
    cout << ans << endl;
    return 0;
}

