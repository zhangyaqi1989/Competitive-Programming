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
    int n;
    cin >> n;
    int A, B, C;
    cin >> A >> B >> C;
    int a, b, c, new_A, new_B, new_C;
    for(int i = 1; i < n; ++i) {
        cin >> a >> b >> c;
        new_A = a + max(B, C);
        new_B = b + max(A, C);
        new_C = c + max(A, B);
        A = new_A;
        B = new_B;
        C = new_C;
    }
    cout << max(A, max(B, C)) << endl;
    return 0;
}

