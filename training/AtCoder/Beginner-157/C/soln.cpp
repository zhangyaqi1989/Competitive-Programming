/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
#include<cmath>
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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> sc_pairs(m);
    for(int i = 0; i < m; ++i) {
        int s, c;
        cin >> s >> c;
        sc_pairs[i] = {s, c};
    }
    int lo = pow(10, n - 1);
    int hi = pow(10, n) - 1;
    bool find = false;
    for(int num = lo; num <= hi; ++num) {
        string num_string = to_string(num);
        bool valid = true;
        for(const auto & p : sc_pairs) {
            int s, c;
            tie(s, c) = p;
            if(num_string[s - 1] - '0' != c) {
                valid = false;
                break;
            }
        }
        if(valid){
            cout << num << endl;
            find = true;
            break;
        }
    }
    if(!find) cout << -1 << endl;
    return 0;
}

