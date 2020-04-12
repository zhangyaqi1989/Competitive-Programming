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
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A[i] = x;
        sum += x;
    }
    sort(A.rbegin(), A.rend());
    int vote = A[m - 1];
    double mn_vote = 1.0 / (4 * m) * sum;
    if(vote >= mn_vote) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}

