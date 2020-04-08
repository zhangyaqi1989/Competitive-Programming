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

vector<string> maze;
bool visited[501][501];

int m, n, k;

void dfs(int r, int c) {
    if(r < 0 || c < 0 || r >= m || c >= n || maze[r][c] != '.' || visited[r][c]) return;
    visited[r][c] = true;
    dfs(r - 1, c);
    dfs(r + 1, c);
    dfs(r, c - 1);
    dfs(r, c + 1);
    if (k) {
        --k;
        maze[r][c] = 'X';
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(visited, 0, sizeof(visited));
    cin >> m >> n >> k;
    for(int i = 0; i < m; ++i) {
        string row;
        cin >> row;
        maze.push_back(row);
    }
    int r0 = 0, c0 = 0;
    for(int r = 0; r < m; ++r) {
        for(int c = 0; c < n; ++c) {
            if(maze[r][c] == '.') {
                r0 = r;
                c0 = c;
                // cout << r0 << " " << c0 << endl;
                dfs(r0, c0);
                for(string row : maze) cout << row << endl;
                return 0;
            }
        }
    }

    return 0;
}
