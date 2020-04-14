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
    int nums[3];
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < 3; ++j) cin >> nums[j];
        sort(nums, nums + 3);
        printf("Case %d: %d\n", i, nums[1]);
    }
    return 0;
}

