#include "tree.h"

tree::tree() : left(nullptr), right(nullptr) {
    
}

tree::~tree() {
    
}

node tree::getDataNode(){
    return data;
}

tree* tree::getLeftNode() {
    return left;
}

tree* tree::getRightNode() {
    return right;
}

void tree::setLeftNode(tree* toSet) {
    left = toSet;
}

void tree::setRightNode(tree* toSet) {
    right = toSet;
}
