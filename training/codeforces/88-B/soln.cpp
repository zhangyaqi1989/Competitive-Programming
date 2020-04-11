/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<iostream>
#include<map>
#include<unordered_map>
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
    int m, n, x;
    cin >> m >> n >> x;
    vector<vector<pair<int, int>>> board(26);
    vector<pair<int, int>> shifts;
    for(int i = 0; i < m; ++i) {
        string row;
        cin >> row;
        for(int j = 0; j < n; ++j) {
            char ch = row[j];
            if(ch == 'S') shifts.emplace_back(i, j);
            else board[ch - 'a'].emplace_back(i, j);
        }
    }
    int nq;
    cin >> nq;
    string query;
    cin >> query;
    x = x * x;
    int cnt = 0;
    // cout << shifts.size() << endl;
    // cout << query << endl;
    unordered_map<char, int> memo;
    for(char ch : query) {
        if(board[tolower(ch) - 'a'].empty() || (isupper(ch) && shifts.empty())) {
            cout << -1 << endl;
            return 0;
        } else {
            if(isupper(ch)) {
                ch = tolower(ch);
                // compute shortest distance
                auto it = memo.find(ch);
                if(it == memo.end()) {
                    int mn = INT_MAX;
                    for(const auto & p1 : board[ch - 'a']) {
                        for(const auto & p2 : shifts) {
                            int x1 = p1.first, y1 = p1.second;
                            int x2 = p2.first, y2 = p2.second;
                            int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
                            mn = min(mn, d);
                        }
                    }
                    memo[ch] = mn;
                    if(mn > x) ++cnt;
                } else {
                    int mn = it->second;
                    if(mn > x) ++cnt;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

