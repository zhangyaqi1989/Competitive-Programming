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
#include<bitset>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    char C;
    cin >> n >> m >> C;
    vector<string> grid;
    for(int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        grid.push_back(row);
    }
    vector<bool> seen(26, false);
    int cnt = 0;
    int dirs[5] = {0, 1, 0, -1, 0};
    for(int r = 0; r < n; ++r) {
        for(int c = 0; c < m; ++c) {
            if(grid[r][c] == C) {
                for(int k = 0; k < 4; ++k) {
                    int new_r = r + dirs[k];
                    int new_c = c + dirs[k + 1];
                    if (0 <= new_r && new_r < n && 0 <= new_c && new_c < m) {
                        char ch = grid[new_r][new_c];
                        if(ch != '.' && ch != C && !seen[ch - 'A']) {
                            seen[ch - 'A'] = true;
                            ++cnt;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

