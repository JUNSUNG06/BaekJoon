#include<iostream>
#include<map>
using namespace std;

map<char, pair<char, char>> tree;

// 전위순회
void PreorderTraverse(char node)
{
    if (node == '.' || tree.find(node) == tree.end())
        return;

    cout << node;
    PreorderTraverse(tree[node].first);
    PreorderTraverse(tree[node].second);
}

// 중위순회
void InorderTraverse(char node)
{
    if (node == '.' || tree.find(node) == tree.end())
        return;

    InorderTraverse(tree[node].first);
    cout << node;
    InorderTraverse(tree[node].second);
}

// 후위순회
void PostorderTraverse(char node)
{
    if (node == '.' || tree.find(node) == tree.end())
        return;

    PostorderTraverse(tree[node].first);
    PostorderTraverse(tree[node].second);
    cout << node;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char parent, left, right;

        cin >> parent >> left >> right;

        if (tree.find(parent) == tree.end())
            tree.insert(make_pair(parent, make_pair(left, right)));
        else
            tree[parent] = make_pair(left, right);
    }

    PreorderTraverse('A');
    cout << endl;
    InorderTraverse('A');
    cout << endl;
    PostorderTraverse('A');
    cout << endl;
}