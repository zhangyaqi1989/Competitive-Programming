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

const int MAX_STEP = 8;

int dxs[4] = {0, 0, 1, -1};
int dys[4] = {1, -1, 0, 0};
string dirs = "NSEW";

void dfs(int x, int y, int x_t, int y_t, int steps, string & path, 
        int & mn_steps, string & best_path) {
    if(x == x_t && y == y_t) {
        if(steps < mn_steps) {
            mn_steps = steps;
            best_path = path;
        }
    }
    if(steps > MAX_STEP) return;
    for(int i = 0; i < 4; ++i) {
        int dx = dxs[i] << steps, dy = dys[i] << steps;
        path += dirs[i];
        dfs(x + dx, y + dy, x_t, y_t, steps + 1, path, mn_steps, best_path);
        path.pop_back();
    }

}

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int x, y;
        cin >> x >> y;
        // dfs(x + dx, y + dy, x_t, y_t, steps + 1, path, mn_steps, best_path);
        int mn_steps = 100;
        string best_path = "";
        string path = "";
        dfs(0, 0, x, y, 0, path, mn_steps, best_path);
        if (!best_path.empty()) cout << best_path << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
    return 0;

}

