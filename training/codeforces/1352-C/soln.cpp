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
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        // k-th positive integer that is not divisible by n
        int lo = 1, hi = 2 * k;
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            int count = mid - mid / n;
            if(count < k) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        cout << lo << endl;
    }
    return 0;
}

