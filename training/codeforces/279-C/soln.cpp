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
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> nums(n + 1, 0), l(n + 1, 1), r(n + 1, 1);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &nums[i]);
        if(i == 1) l[1] = 1;
        else {
            if(nums[i] <= nums[i - 1]) l[i] = 1 + l[i - 1];
        }
    }
    for(int i = n; i >= 1; --i) {
        if(i == n) r[n] = 1;
        else {
            if(nums[i] <= nums[i + 1]) r[i] = 1 + r[i + 1];
        }
    }
    for(int i = 0; i < m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(r[a] + l[b] >= b - a + 1) puts("Yes");
        else puts("No");
    }
    return 0;

}

