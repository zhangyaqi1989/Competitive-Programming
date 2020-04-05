/*
 * written by Yaqi Zhang (zhang623@wisc.edu)
 * University of Wisconsin-Madison
 * 2019
 */
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        scores.push_back(num);
    }
    sort(scores.rbegin(), scores.rend());
    int cnt = 0;
    int bar = scores[k - 1];
    for(int score : scores) {
        if(score > 0 && score >= bar) ++cnt;
        else break;
    }
    cout << cnt << endl;
    return 0;

}

