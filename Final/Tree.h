#pragma once
#include "Node.h"

class Tree : Node{
private:
	int data;
	Tree* left;
	Tree* right;
	int vheight;
public:
	Tree(int);

	int height(Tree* p);
	int bfactor(Tree* p);
	void fixheight(Tree* p);

	Tree* rotateright(Tree* p);
	Tree* rotateleft(Tree* q);
	Tree* balance(Tree* p);
	Tree* insert(Tree* p, int k);
	Tree* findmin(Tree* p);
	Tree* removemin(Tree* p);
	Tree* remove(Tree* p, int k);
	void printer() const;
};