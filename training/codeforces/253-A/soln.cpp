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
    int n, m;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n >> m;
    string line;
    if(n > m) {
        for(int i = 0; i < m; ++i) line += "BG";
        line += string(n - m, 'B');
    } else {
        for(int i = 0; i < n; ++i) line += "GB";
        line += string(m - n, 'G');
    }
    out << line << endl;
    return 0;
}

