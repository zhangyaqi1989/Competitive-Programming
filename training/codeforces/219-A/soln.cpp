/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    string s;
    cin >> s;
    int cnts[26] = {};
    for(char ch : s) {
        ++cnts[ch - 'a'];
    }
    bool valid = true;
    string ans;
    for(int i = 0; i < 26; ++i) {
        if(cnts[i] > 0) {
            if(cnts[i] % k != 0) {
                valid = false;
                break;
            } else{
                ans += string(cnts[i] / k, 'a' + i);
            }
        }
    }
    if(valid) {
        string res;
        for(int i = 0; i < s.length() / ans.length(); ++i)
            res += ans;
        cout << res << endl;
    } else cout << -1 << endl;
    // cout << (valid ? ans : -1) << endl;
    return 0;
}

