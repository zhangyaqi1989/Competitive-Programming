/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

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
    for(int i = 0; i < 7; ++i){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int i = 0;
    while(n > 0) {
        if(nums[i] >= n) break;
        n -= nums[i];
        i = (i + 1) % 7;
    }
    cout << i + 1 << endl;
    return 0;
}

