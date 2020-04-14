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

struct Proposal {
    string name;
    int met;
    double price;
    int idx;
};

bool proposal_cmp(const Proposal & a, const Proposal & b) {
    if(a.met != b.met) return a.met > b.met;
    if(a.price != b.price) return a.price < b.price;
    return a.idx < b.idx;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, p;
    int case_id = 1;
    string temp;
    while(cin >> n >> p) {
        if(n == 0 && p == 0) break;
        getline(cin, temp);
        for(int i = 0; i < n; ++i) {
            // cout << temp << endl;
            getline(cin, temp);
        }
        vector<Proposal> ps(p);
        for(int j = 0; j < p; ++j) {
            string name;
            getline(cin, name);
            double d;
            int r;
            cin >> d >> r;
            getline(cin, temp);
            for(int i = 0; i < r; ++i) getline(cin, temp);
            ps[j] = {name, r, d, j};
        }
        sort(ps.begin(), ps.end(), proposal_cmp);
        if(case_id > 1) cout << "\n";
        cout << "RFP #" << case_id++ << endl;
        cout << ps[0].name << "\n";
    }
    return 0;
}

