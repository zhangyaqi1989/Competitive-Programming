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

struct Node {
    int val;
    Node * left;
    Node * right;
    Node(int val): val(val), left(nullptr), right(nullptr){}
};

vector<int> idxes;

void preorder(Node * node) {
    if(node != nullptr) {
        preorder(node->left);
        idxes.push_back(node->val);
        preorder(node->right);
    }
}


int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    // this is a binary tree
    Node * root = nullptr;
    Node * cur = nullptr;
    int idx = 1;
    // [0, 1]
    preorder(root);
    for(int num : idxes) 
        cout << num << endl;
    return 0;
}

