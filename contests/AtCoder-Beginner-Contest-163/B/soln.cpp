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
    int N, M;
    cin >> N >> M;
    int sum = 0;
    for(int i = 0; i < M; ++i) {
        int x;
        cin >> x;
        sum += x;
    }
    if(sum > N) cout << -1 << endl;
    else cout << N - sum << endl;
    return 0;

}

