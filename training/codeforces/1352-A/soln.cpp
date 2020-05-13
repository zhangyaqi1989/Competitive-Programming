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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int num;
        cin >> num;
        int unit = 1;
        vector<int> adds;
        do {
            int d = num % 10;
            // cout << d * unit << (num < 10 ? "" << " ");
            if(d) adds.push_back(d * unit);
            num /= 10;
            unit *= 10;
        } while (num);
        int sz = adds.size();
        cout << sz << endl;
        for(int j = 0; j < sz; ++j) {
            cout << adds[j] << (j + 1 < sz ? " " : "");
        }
        cout << endl;
    }
    return 0;
}

