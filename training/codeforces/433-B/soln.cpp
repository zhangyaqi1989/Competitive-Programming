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
        // scanf("%d", &num);
        cin >> num;
        nums.push_back(num);
    }
    vector<ll> pres = {0LL};
    for(int i = 0; i < n; ++i) {
        pres.push_back(pres.back() + nums[i]);
    }
    sort(nums.begin(), nums.end());
    vector<ll> sort_pres = {0LL};
    for(int i = 0; i < n; ++i) {
        sort_pres.push_back(sort_pres.back() + nums[i]);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++i) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 1) {
            cout << pres[r] - pres[l - 1] << endl;
        } else {
            cout << sort_pres[r] - sort_pres[l - 1] << endl;
        }
    }
    return 0;
}

