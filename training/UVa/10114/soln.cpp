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
    int n, m;
    double down_pay, loan;
    while(1) {
        // scanf("%d %lf %lf %d", &n, &down_pay, &loan, &m);
        cin >> n >> down_pay >> loan >> m;
        if(n < 0) break;
        vector<double> rates(n + 1, 2);
        for(int i = 0; i < m; ++i) {
            int idx;
            double rate;
            cin >> idx >> rate;
            rates[idx] = rate;
        }
        double cur_rate = 0.0;
        for(int i = 0; i < n + 1; ++i) {
            if(rates[i] == 2) rates[i] = cur_rate;
            else cur_rate = rates[i];
        }
        double value = down_pay + loan;
        double month_pay = loan / n;
        value *= (1.0 - rates[0]);
        bool done = false;
        for(int i = 1; i <= n; ++i) {
            if(loan < value) {
                done = true;
                cout << i - 1 << " month" << (i - 1 == 1 ? "" : "s") << endl;
                break;
            }
            value *= (1 - rates[i]);
            loan -= month_pay;
        }
        if(!done)
            cout << n << " month" << (n == 1 ? "" : "s") << endl;
    }
    return 0;

}

