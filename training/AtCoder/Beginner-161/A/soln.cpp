/*
 * written by Yaqi Zhang
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

using namespace std;

void Swap(int & x, int & y) {
    int t = x;
    x = y;
    y = t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, y, z;
    cin >> x >> y >> z;
    swap(x, y);
    swap(x, z);
    cout << x << " " << y << " " << z << "\n";
    return 0;

}

