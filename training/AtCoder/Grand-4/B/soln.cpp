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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    long long ans = 0LL;
    // cast does not generate new slime
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums[i] = num;
    }
    // initially 0
    return 0;

}

