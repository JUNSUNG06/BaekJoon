#include<iostream>
using namespace std;

class Node
{
public:
    Node() {}
    ~Node() {}

public:
    Node* left;
    Node* right;
    int value;
};

class Tree
{
public:
    Tree() {}
    ~Tree() {}

public:
    Node* root = nullptr;

public:
    void Insert(Node* node)
    {
        if (root == nullptr)
            root = node;
        else
            InsertRecur(root, node);
    }

    void InsertRecur(Node* parent, Node* node)
    {
        if (parent->value == node->value)
            return;
        else if (parent->value > node->value)
        {
            if (parent->left == nullptr)
                parent->left = node;
            else
                InsertRecur(parent->left, node);
        }
        else
        {
            if (parent->right == nullptr)
                parent->right = node;
            else
                InsertRecur(parent->right, node);
        }
    }

    void PostorderTraverse(Node* node)
    {
        if (node == nullptr)
            return;

        PostorderTraverse(node->left);
        PostorderTraverse(node->right);
        cout << node->value << endl;
    }
};

int main()
{
    Tree tree;
    int value;

    while (cin >> value)
    {
        Node* node = new Node();
        node->value = value;
        tree.Insert(node);
    }

    tree.PostorderTraverse(tree.root);

    return 0;
}