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
    char ch;
    int cnt = 0;
    while(scanf("%c", &ch) == 1){
        if(ch == '"') {
            if(cnt & 1) cout << "''";
            else cout << "``";
            ++cnt;
        } else {
            cout << ch;
        }
    }
    return 0;
}

