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
    for(int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        if(word.length() > 10) {
            word = word.substr(0, 1) + to_string(word.length() - 2) + word.back();
        }
        cout << word << endl;
    }
    return 0;

}

