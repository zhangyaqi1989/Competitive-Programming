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
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    for(int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    multiset<int> m1(nums.begin(), nums.end());
    multiset<int> m2(nums.begin(), nums.end());
    int lo = 0, hi = 0;
    int left = n;
    int price = 0;
    while(left-- > 0) {
        price = *m1.begin();
        m1.erase(m1.begin());
        lo += price;
        if(price > 1) m1.insert(price - 1);
        price = *m2.rbegin();
        m2.erase(--m2.end());
        hi += price;
        if(price > 1) m2.insert(price - 1);
    }
    cout << hi << " " << lo << endl;
    return 0;
}

