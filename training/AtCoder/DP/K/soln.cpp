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

int memo[100005];
vector<int> A;

bool solve(int left) {
    if(memo[left] != -1) return memo[left];
    bool ans = false;
    for(int pick : A) {
        if(left >= pick && !solve(left - pick)) ans = true;
    }
    memo[left] = ans;
    return ans;
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(memo, -1, sizeof memo);
    int N, K;
    cin >> N >> K;
    A.resize(N);
    for(int i = 0; i < N; ++i) cin >> A[i];
    sort(A.begin(), A.end());
    cout << (solve(K) ? "First" : "Second") << endl;
    return 0;

}

