/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t;
    cin >> n >> t;
    string line;
    cin >> line;
    while(t-- > 0) {
        for(int i = 0; i < n - 1;) {
            if(line[i] == 'B' && line[i + 1] == 'G') {
                swap(line[i], line[i + 1]);
                i += 2;
            } else ++i;
        }
    }
    cout << line << endl;
    return 0;
}

