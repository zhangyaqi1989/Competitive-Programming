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

const int MOD = 1e9;

int x, y;

int add_self(int & x, int y) {
    x += y;
    if(x >= MOD) x -= MOD;
    if(x < 0) x += MOD;
}

void move(string exp, string rep){
    int N = 0, S = 0, W = 0, E = 0;
    for(char ch : exp) {
        if(ch == 'N') ++N;
        else if (ch == 'S') ++S;
        else if (ch == 'W') ++W;
        else ++E;
    }
    // How to DO THIS
}

void parse(string exp) {
    // pass
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for(int case_id = 1; case_id <= T; ++case_id) {
        cout << "Case #" << case_id << ": ";
        string exp;
        cin >> exp;
        x = 0;
        y = 0;
        parse(exp);
        cout << x + 1 << " " << y + 1 << endl;
    }
    return 0;

}

