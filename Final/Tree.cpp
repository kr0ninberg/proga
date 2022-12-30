#include "Tree.h"
#include <iostream>

Tree::Tree(int data) : data(data), left(nullptr), right(nullptr), vheight(1) {}

int Tree::height(Tree* p){
    return p ? p->vheight : 0;
}

int Tree::bfactor(Tree* p){
    return height(p->right) - height(p->left);
}

void Tree::fixheight(Tree* p){
    int hl = height(p->left);
    int hr = height(p->right);
    p->vheight = (hl > hr ? hl : hr) + 1;

}


Tree* Tree::rotateright(Tree* p){ // правый поворот вокруг p
    Tree* q = p->left;
    p->left = q->right;
    q->right = p;
    fixheight(p);
    fixheight(q);
    return q;
}

Tree* Tree::rotateleft(Tree* q){ // левый поворот вокруг q
    Tree* p = q->right;
    q->right = p->left;
    p->left = q;
    fixheight(q);
    fixheight(p);
    return p;
}



Tree* Tree::balance(Tree* p){ // балансировка узла p
    fixheight(p);
    if (bfactor(p) == 2)
    {
        if (bfactor(p->right) < 0)
            p->right = rotateright(p->right);
        return rotateleft(p);
    }
    if (bfactor(p) == -2)
    {
        if (bfactor(p->left) > 0)
            p->left = rotateleft(p->left);
        return rotateright(p);
    }
    return p; // балансировка не нужна
}



Tree* Tree::insert(Tree* p, int k){ // вставка ключа k в дерево с корнем p
    if (!p) return new Tree(k);
    if (k < p->data)
        p->left = insert(p->left, k);
    else
        p->right = insert(p->right, k);
    return balance(p);
}

Tree* Tree::findmin(Tree* p){ // поиск узла с минимальным ключом в дереве p
    return p->left ? findmin(p->left) : p;
}

Tree* Tree::removemin(Tree* p){ // удаление узла с минимальным ключом из дерева p
    if (p->left == 0)
        return p->right;
    p->left = removemin(p->left);
    return balance(p);
}

Tree* Tree::remove(Tree* p, int k){ // удаление ключа k из дерева p
    if (!p) return 0;
    if (k < p->data)
        p->left = remove(p->left, k);
    else if (k > p->data)
        p->right = remove(p->right, k);
    else //  k == p->key
    {
        Tree* q = p->left;
        Tree* r = p->right;
        delete p;
        if (!r) return q;
        Tree* min = findmin(r);
        min->right = removemin(r);
        min->left = q;
        return balance(min);
    }
    return balance(p);
}

void Tree::printer() const {
    std::cout << data << " ";
    if (left != nullptr) left->printer();
    if (right != nullptr) right->printer();
    return;
}