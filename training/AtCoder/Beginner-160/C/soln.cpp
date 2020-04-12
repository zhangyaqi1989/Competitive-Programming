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
    int k, n;
    cin >> k >> n;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A[i] = x;
    }
    int mn = A.back() - A.front();
    for(int i = 0; i < n - 1; ++i) {
        mn = min(k - A[i + 1] + A[i], mn);
    }
    cout << mn << "\n";
    return 0;

}

