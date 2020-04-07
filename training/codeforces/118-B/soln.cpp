/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int R = 2 * N + 1;
    int C = R;
    for(int r = 0; r < R; ++r) {
        bool plot = false;
        for(int c = 0; c < C; ++c) {
            int dr = abs(r - N);
            int dc = abs(c - N);
            if(dr + dc > N){
                if (!plot) cout << " ";
                else break;
            }
            else {
				cout << N - dr - dc;
                plot = true;
            }
            if(N - dr - dc == 0 && c >= N) continue;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
