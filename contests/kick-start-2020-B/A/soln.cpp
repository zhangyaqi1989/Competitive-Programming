/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stdio.h>
#include<vector>

#define INF 0x3f3f3f3f

using namespace std;


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int n;
        cin >> n;
        vector<int> hs(n);
        for(int & h : hs) cin >> h;
        int cnt = 0;
        for(int i = 1; i < n - 1; ++i) {
            if(hs[i] > hs[i - 1] && hs[i] > hs[i + 1]) ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;

}

