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
    string stone;
    cin >> stone;
    stone += "#";
    int lo = 0;
    int cnt = 0;
    for(int i = 0; i < n + 1; ++i) {
        if(stone[i] != stone[lo]) {
            cnt += i - lo - 1;
            lo = i;
        }
    }
    cout << cnt << endl;
    return 0;

}

