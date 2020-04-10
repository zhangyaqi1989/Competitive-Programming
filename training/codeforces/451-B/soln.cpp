/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
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
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> sorted_nums(nums);
    sort(sorted_nums.begin(), sorted_nums.end());
    int lo = 0;
    int hi = n - 1;
    while(lo <= hi && nums[lo] == sorted_nums[lo]) ++lo;
    while(hi >= lo && nums[hi] == sorted_nums[hi]) --hi;
    if(lo >= hi) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    } else {
        reverse(nums.begin() + lo, nums.begin() + hi + 1);
        int valid = true;
        for(int i = 1; i < n; ++i) {
            if(nums[i] < nums[i - 1]) {
                valid = false;
                break;
            }
        }
        if(valid) {
            cout << "yes" << endl;
            cout << lo + 1 << " " << hi + 1 << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}

