#ifndef TREE_H
#define TREE_H

#include "node.h"

class tree
{
private:
    node data;
    tree* left;
    tree* right;

public:
    tree();
    tree* getLeftNode();
    tree* getRightNode();
    void setLeftNode(tree*);
    void setRightNode(tree*);
    node getDataNode();
    ~tree();
};

#endif
