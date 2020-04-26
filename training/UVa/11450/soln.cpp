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

bool dp[21][201];

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 0; case_id < T; ++case_id) {
        memset(dp, false, sizeof dp);
        dp[0][0] = true;
        int M, C;
        cin >> M >> C;
        for(int i = 1; i <= C; ++i) {
            int K;
            cin >> K;
            for(int j = 0; j < K; ++j){
                int price;
                cin >> price;
                for(int money = price; money <= M; ++money) {
                    if(dp[i - 1][money - price]) dp[i][money] = true;
                }
            }
        }
        bool find = false;
        for(int spend = M; spend > 0; --spend) {
            if(dp[C][spend]) {
                cout << spend << endl;
                find = true;
                break;
            }
        }
        if(!find) cout << "no solution" << endl;
    }
    return 0;
}

