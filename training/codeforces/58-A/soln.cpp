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
    string word;
    cin >> word;
    string key = "hello";
    int j = 0;
    int n = word.length();
    for(int i = 0; i < n; ++i) {
        if(word[i] == key[j]) {
            if(++j == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;

}

