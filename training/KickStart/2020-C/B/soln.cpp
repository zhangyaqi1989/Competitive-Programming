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
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        int R, C;
        cin >> R >> C;
        vector<set<int>> graph(26);
        vector<int> chars(26, 0);
        vector<string> wall(R);
        vector<int> indegrees(26, 0);
        for(int i = 0; i < R; ++i) {
            cin >> wall[i];
        }
        for(int i = 0; i < R; ++i) {
            for(int j = 0; j < C; ++j) {
                ++chars[wall[i][j] - 'A'];
                if(i > 0 && wall[i][j] != wall[i - 1][j]) {
                    // wall[i][j] -> wall[i - 1][j]
                    int u = wall[i][j] - 'A', v = wall[i - 1][j] - 'A';
                    if(graph[u].find(v) == graph[u].end()) {
                        graph[u].insert(v);
                        ++indegrees[v];
                    }
                }
            }
        }
        vector<int> ans;
        vector<int> frees;
        int cnt = 0;
        for(int i = 0; i < 26; ++i) {
            if(chars[i]) {
                ++cnt;
                if(indegrees[i] == 0) frees.push_back(i);
            }
        }
        while(!frees.empty()) {
            int u = frees.back();
            ans.push_back(u);
            frees.pop_back();
            for(int v : graph[u]) {
                if(--indegrees[v] == 0) {
                    frees.push_back(v);
                }
            }
        }
        if((int) ans.size() == cnt) {
            for(int u : ans) {
                cout << (char) ('A' + u);
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }

    }
    return 0;
}

