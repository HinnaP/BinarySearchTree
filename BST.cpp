# include <iostream>
# include <cstdlib>
#include "BST.h"
using namespace std;

// defining from binary search tree class

BST::BST()
{
    root = NULL;
}
BST::node* BST::CreateLeaf(int key)
{
    node* n = new node;
    n->key = key;
    n->left = NULL;
    n->right = NULL;

    return n;
}
