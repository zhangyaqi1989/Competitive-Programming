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
    string name;
    cin >> name;
    set<char> chars(name.begin(), name.end());
    puts(chars.size() % 2 == 1 ? "IGNORE HIM!\n" : "CHAT WITH HER!\n");
    return 0;

}

