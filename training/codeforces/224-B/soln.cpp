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
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    map<int, int> window;
    int lo = 0;
    int L = -1, R = -1;
    int mn_len = n + 1;
    for(int i = 0; i < n; ++i) {
        ++window[nums[i]];
        // move the lo as right as possible
        while(window.size() > k || (window.size() == k && window[nums[lo]] > 1)) {
            auto it = window.find(nums[lo]);
            if(it->second > 1) --it->second;
            else window.erase(it);
            ++lo;
        }
        if(window.size() >= k) {
            if(i - lo + 1 < mn_len) {
                mn_len = i - lo + 1;
                L = lo + 1;
                R = i + 1;
                break;
            }
        }
    }
    cout << L << " " << R << endl;
    return 0;
}

