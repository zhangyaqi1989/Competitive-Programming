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
    string s;
    cin >> s;
    string ans;
    string vowels = "AOYEUIaoyeui";
    for(char ch : s) {
        if(vowels.find(ch) == string::npos) {
            ans += '.';
            ans += tolower(ch);
        }
    }
    cout << ans << endl;
    return 0;

}

