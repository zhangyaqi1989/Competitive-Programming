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
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int n;
        cin >> n;
        vector<string> strs(n);
        for(int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            strs[i] = s;
        }
        bool ok = true;
        string pref = "";
        string suf = "";
        vector<string> subs;
        for(auto s : strs) {
            if(!ok) break;
            int last = -1;
            string cur_pref = "";
            string cur_suf = "";
            int m = s.length();
            for(int j = 0; j < m; ++j) {
                if(s[j] == '*') {
                    if(last == -1) cur_pref = s.substr(0, j);
                    else subs.push_back(s.substr(last, j - last));
                    last = j + 1;
                }
            }
            if(cur_pref.size() > pref.size()) swap(pref, cur_pref);
            if(pref.substr(0, (int) cur_pref.size()) != cur_pref) ok = false;
            if(ok) {
                cur_suf = s.substr(last);
                if(cur_suf.size() > suf.size()) swap(suf, cur_suf);
                if(cur_suf != suf.substr((int) suf.size() - cur_suf.size())) ok = false;
            }
        }
        if(ok) {
            cout << pref;
            for(string sub : subs) cout << sub;
            cout << suf;
            cout << endl;
        } else cout << "*" << endl;
    }

    return 0;
}

