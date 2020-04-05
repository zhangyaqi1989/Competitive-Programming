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
    vector<string> ans = {"I", "hate", "it"};
    for(int i = 0; i < n - 1; ++i) {
        ans.pop_back();
        ans.push_back("that");
        ans.push_back("I");
        if(i % 2 == 0) ans.push_back("love");
        else ans.push_back("hate");
        ans.push_back("it");
    }
    string s;
    for(string word : ans) {
        s += word + " ";
    }
    s.pop_back();
    cout << s << endl;
    return 0;
}

