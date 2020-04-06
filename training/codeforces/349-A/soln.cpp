/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2020
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
typedef long long ll;

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int c25 = 0, c50 = 0;
    bool valid = true;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if(num == 25) ++c25;
        else if (num == 50) {
            if(c25-- <= 0) {
                valid = false;
                break;
            }
            ++c50;
        } else {
            int need = 75;
            if(c50 > 0) {
                need = 25;
                --c50;
            }
            if(c25 < need / 25) {
                valid = false;
                break;
            }
            c25 -= need / 25;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
    return 0;
}

