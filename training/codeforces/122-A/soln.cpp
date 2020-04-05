/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

bool IsLucky(int num) {
    do {
        int d = num % 10;
        num /= 10;
        if (d != 4 && d != 7) return false;
    } while (num);
    return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    cin >> num;
    for(int f = 1; f <= num; ++f) {
        if(num % f == 0 && IsLucky(f)) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

