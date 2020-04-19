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


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p1 = max(3 * a / 10, a - a / 250 * c);
    int p2 = max(3 * b / 10, b - b / 250 * d);
    if (p1 > p2) cout << "Misha";
    else if (p1 == p2) cout << "Tie";
    else cout << "Vasya";
    cout << "\n";
    return 0;

}

