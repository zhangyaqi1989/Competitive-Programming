/*
 * written by Yaqi Zhang
 * University of Wisconsin-Madison
 * 2020
 */

#include<algorithm>
#include<cstring>
#include<climits>
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
    vector<pair<int, int>> coords(101, {-1, -1});
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int a;
            cin >> a;
            coords[a] = {i, j};
        }
    }
    map<pair<int, int>, int> counter;
    int n;
    cin >> n;
    bool bingo = false;
    for(int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        int r, c;
        tie(r, c) = coords[b];
        // auto [r, c] = coords[b];
        if (r != -1) {
            if(++counter[{1, r}] == 3) bingo = true;
            if(++counter[{2, c}] == 3) bingo = true;
            if(++counter[{3, r + c}] == 3) bingo = true;
            if(++counter[{4, r - c}] == 3) bingo = true;
        }
    }
    cout << (bingo ? "Yes" : "No") << endl;
    return 0;
}

