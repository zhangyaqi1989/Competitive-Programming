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
    string s;
    cin >> s;
    vector<string> words;
    int i = 0, n = s.length();
    while(i < n) {
        while(i + 2 < n && s.substr(i, 3) == "WUB") i += 3;
        string word;
        while((i + 2 < n && s.substr(i, 3) != "WUB") || (i + 2 >= n && i < n)) {
            word += s[i++];
        }
        words.push_back(word);
    }
    string ans;
    int m = words.size();
    for(int i = 0; i < m; ++i) {
        ans += words[i];
        if (i != m - 1) ans += " ";
    }
    cout << ans << endl;
    return 0;
}

