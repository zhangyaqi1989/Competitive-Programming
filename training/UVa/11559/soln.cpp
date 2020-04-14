/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
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
    int N, B, H, W;
    while(cin >> N >> B >> H >> W) {
        int best = INF;
        for(int i = 0; i < H; ++i) {
            int price;
            cin >> price;
            for(int j = 0; j < W; ++j) {
                int avi;
                cin >> avi;
                if(avi >= N) {
                    best = min(best, N * price);
                }
            }
        }
        if(best <= B) printf("%d\n", best);
        else printf("%s\n", "stay home");
    }
    return 0;
}
