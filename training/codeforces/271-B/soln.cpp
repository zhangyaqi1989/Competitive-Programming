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

typedef long long ll;

using namespace std;


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    const int N = 120000;
    vector<bool> is_primes(N, true);
    is_primes[0] = false;
    is_primes[1] = false;
    for(int i = 2; i < N; ++i) {
        if(is_primes[i]) {
            for(ll j = (ll) i * i; j < (ll) N; j += i) {
                is_primes[j] = false;
            }
        }
    }
    vector<int> rows(h, 0), cols(w, 0);
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            int x;
            cin >> x;
            int cnt = 0;
            while(!is_primes[x]) {
                ++x;
                ++cnt;
            }
            rows[i] += cnt;
            cols[j] += cnt;
        }
    }
    cout << min(*min_element(rows.begin(), rows.end()), *min_element(cols.begin(), cols.end())) << endl;
    return 0;

}

