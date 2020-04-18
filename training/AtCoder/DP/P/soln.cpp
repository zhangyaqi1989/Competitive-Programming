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

using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define INF 0x3f3f3f3f


const int N = 100005;
const int MOD = 1e9 + 7;

vector<int> graph[N];

// return {number of ways to paint u black, ... white}
pair<int, int> post_order(int u, int parent) {
    int all_white = 1;
    int sth_is_black = 0;
    for(int v : graph[u]) {
        if(v != parent) {
            auto p = post_order(v, u);
            int black = p.first, white = p.second;
            int memo_all_white = all_white;
            all_white = ((long long) all_white * white) % MOD;
            sth_is_black = ((long long) memo_all_white * black % MOD
                    + (long long) sth_is_black * (black + white) % MOD) % MOD;
        }
    }
    // debug() << imie(u);
    debug() << imie(u) imie(all_white) imie(sth_is_black);
    return {all_white, (all_white + sth_is_black) % MOD};
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n - 1; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    pair<int, int> p = post_order(1, -1);
    cout << (p.first + p.second) % MOD << endl;
    return 0;

}

