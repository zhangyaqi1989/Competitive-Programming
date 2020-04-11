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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int h, w;
        cin >> h >> w;
        vector<vector<int>> A(h, vector<int>(w, 0));
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                int num;
                cin >> num;
                A[i][j] = num;
            }
        }
        vector<vector<int>> up(h, vector<int>(w, 0));
        vector<vector<int>> down(h, vector<int>(w, 0));
        vector<vector<int>> left(h, vector<int>(w, 0));
        vector<vector<int>> right(h, vector<int>(w, 0));
        vector<vector<int>> when(h, vector<int>(w, -1));

        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                up[i][j] = i - 1;
                down[i][j] = i + 1;
                left[i][j] = j - 1;
                right[i][j] = j + 1;
            }
        }
        auto GetNeighbor =[&](pair<int, int> p, int dir) {
            int r, c;
            tie(r, c) = p;
            if(dir == 0) return make_pair(up[r][c], c);
            if(dir == 1) return make_pair(down[r][c], c);
            if(dir == 2) return make_pair(r, left[r][c]);
            return make_pair(r, right[r][c]);

        };
        long long total = 0LL;
        vector<pair<int, int>> check;
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                check.emplace_back(i, j);
                total += A[i][j];
            }
        }
        long long ans = total;
        for(int iter = 0; ; ++iter) {
            vector<pair<int, int>> rm;
            for(auto & p : check) {
                int sum = 0, cnt = 0;
                for(int dir = 0; dir < 4; ++dir) {
                    auto q = GetNeighbor(p, dir);
                    int r, c;
                    tie(r, c) = q;
                    if(0 <= r && r < h && 0 <= c && c < w) {
                        ++cnt;
                        sum += A[r][c];
                    }
                }
                if(sum > A[p.first][p.second] * cnt) {
                    rm.push_back(p);
                }
            }
            if(rm.empty()) break;
            for(auto & p : rm) {
                total -= A[p.first][p.second];
                // A[p.first][p.second] = 0;
                when[p.first][p.second] = iter;
            }
            ans += total;

            vector<pair<int, int>> new_check;
            for(auto & p : rm) {
                for(int dir = 0; dir < 4; ++dir) {
                    auto q = GetNeighbor(p, dir);
                    int qr, qc;
                    tie(qr, qc) = q;
                    if(0 <= qr && qr < h && 0 <= qc && qc < w) {
                        if(when[qr][qc] != iter) {
                            when[qr][qc] = iter;
                            new_check.push_back(q);
                        }
                    }
                }
            }
            for(auto & p : rm) {
                int r, c;
                tie(r, c) = p;
                if(up[r][c] != -1) {
                    down[up[r][c]][c] = down[r][c];
                }
                if(down[r][c] != h) {
                    up[down[r][c]][c] = up[r][c];
                }
                if(left[r][c] != -1) {
                    right[r][left[r][c]] = right[r][c];
                }
                if(right[r][c] != w) {
                    left[r][right[r][c]] = left[r][c];
                }
            }
            swap(check, new_check);
        }
        cout << ans << "\n";
    }
    return 0;
}

