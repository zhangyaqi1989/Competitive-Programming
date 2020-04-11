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
    int T;
    cin >> T;
    for(int case_idx = 1; case_idx <= T; ++case_idx) {
        cout << "Case #" << case_idx << ": \n";
        int n;
        cin >> n;
        if(n < 30){
            for(int i = 0; i < n; ++i) cout << i + 1 << " 1\n";
            continue;
        }
        n -= 30;
        int m = 0;
        bool is_left = 1;
        for(int i = 0; i < 30; ++i) {
            cout << i + 1 << " " << (is_left ? 1 : i + 1) << "\n";
            if(n>>i&1) {
                if(is_left) {
                    for(int j = 1; j <= i; ++j) {
                        cout << i + 1 << " " << j + 1 << "\n";
                    }
                } else {
                    for(int j = i-1; j >= 0; --j) {
                        cout << i + 1 << " " << j + 1 << "\n";
                    }
                }
                ++m;
                is_left ^= 1;
            }
        }
        for(int i = 30; m; --m, ++i) {
            cout << i + 1 << " " << (is_left ? 1 : i + 1) << "\n";
        }
    }
    return 0;
}

