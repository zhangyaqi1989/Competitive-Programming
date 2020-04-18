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
    int x, y;
    cin >> x >> y;
    int dxs[4] = {1, 0, -1, 0};
    int dys[4] = {0, 1, 0, -1};
    int step = 1;
    int cnt = 0;
    int dir = 0;
    int cur_x = 0, cur_y = 0;
    if(cur_x == x && cur_y == y) {
        cout << cnt << endl;
        return 0;
    }
    while (step < 400) {
        for(int i = 0; i < 2; ++i) {
            int dx = dxs[dir];
            int dy = dys[dir];
            for(int j = 0; j < step; ++j) {
                cur_x += dx;
                cur_y += dy;
                if(cur_x == x && cur_y == y) {
                    cout << cnt << endl;
                    return 0;
                }
            }
            dir = (dir + 1) % 4;
            ++cnt;
        }
        ++step;
    }
    return 0;

}

