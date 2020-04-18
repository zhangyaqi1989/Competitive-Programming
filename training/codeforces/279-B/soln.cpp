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
    int n, t;
    cin >> n >> t;
    vector<int> nums(n);
    for(int & num : nums) cin >> num;
    int lo = 0;
    int window = 0;
    int mx = 0;
    for(int i = 0; i < n; ++i) {
        window += nums[i];
        while(window > t) {
            window -= nums[lo++];
        }
        mx = max(mx, i - lo + 1);
    }
    cout << mx << endl;
    return 0;

}

