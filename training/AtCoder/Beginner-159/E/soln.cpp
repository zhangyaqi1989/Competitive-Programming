/*
 * written by Yaqi Zhang
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
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<int>> A(h, vector<int>(w));
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            char ch;
            cin >> ch;
            // A[i][j] = (ch == '0');
            A[i][j] = ch - '0';
        }
    }
    int mn = h * w;
    for(int state = 0; state < (1 << (h - 1)); ++state) {
        vector<int> cuts;
        int cnt = 0;
        cuts.push_back(0);
        for(int i = 0; i < h - 1; ++i) {
            if((state >> i) & 1){
                cuts.push_back(i + 1);
                ++cnt;
            }
        }
        cuts.push_back(h);
        int nrows = cnt + 1;
        vector<int> cur(nrows, 0);
        bool state_valid = true;
        //  cout << state << " " << nrows << endl;
        for(int j = 0; j < w; ++j) {
            if(!state_valid) break;
            // add
            bool valid = true;
            for(int i = 0; i < nrows; ++i) {
                int up = cuts[i], down = cuts[i + 1];
                // assert(up != down);
                for(int r = up; r < down; ++r) {
                    cur[i] += A[r][j];
                }
                if(cur[i] > k) valid = false;
            }
            if(!valid) {
                ++cnt;
                valid = true;
                for(int i = 0; i < nrows; ++i) {
                    int up = cuts[i], down = cuts[i + 1];
                    cur[i] = 0;
                    for(int r = up; r < down; ++r) {
                        cur[i] += A[r][j];
                    }
                    if(cur[i] > k) state_valid = false;
                }
            }
        }
        // cout << state << " " << cnt << endl;
        if(state_valid) mn = min(mn, cnt);
    }
    cout << mn << endl;
    return 0;
}

