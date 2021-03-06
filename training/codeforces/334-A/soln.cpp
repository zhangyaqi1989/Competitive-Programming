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
    int n;
    scanf("%d", &n);
    int lo = 1, hi = n * n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n / 2; ++j) {
            printf("%d %d ", lo++, hi--);
        }
        printf("\n");
    }
    return 0;
}

