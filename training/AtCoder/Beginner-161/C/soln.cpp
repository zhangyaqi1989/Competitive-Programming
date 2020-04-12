/*
 * written by Yaqi Zhang
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

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long N, K;
    cin >> N >> K;
    // N -> |N - K|
    if(N >= K) {
        long long r = N % K;
        cout << min(r, K - r) << endl;
    } else {
        cout << min(N, K - N) << endl;
    }

    return 0;

}

