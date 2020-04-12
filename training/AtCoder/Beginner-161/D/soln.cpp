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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int K;
    cin >> K;
    // How to generate the number
    queue<long long> nums;
    for(int i = 1; i < 10; ++i) {
        nums.push(i);
    }
    long long num = 1;
    for(int i = 0; i < K; ++i) {
        num = nums.front();
        nums.pop();
        long long r = num % 10;
        if(r != 0) nums.push(num * 10 + r - 1);
        nums.push(num * 10 + r);
        if(r != 9) nums.push(num * 10 + r + 1);
    }
    cout << num << "\n";
    return 0;

}

