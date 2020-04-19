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
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i = 0; i < n; ++i) {
        int j;
        cin >> j;
        --j;
        // i -> j
        ans[j] = i + 1;
    }
    for(int num : ans) cout << num << " ";
    cout << endl;
    return 0;

}

