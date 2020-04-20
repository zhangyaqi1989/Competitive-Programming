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

vector<int> tree[200005];

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i = 2; i <= N; ++i) {
        int p;
        cin >> p;
        tree[p].push_back(i);
    }
    for(int i = 1; i <= N; ++i) {
        cout << tree[i].size() << endl;
    }
    return 0;

}

