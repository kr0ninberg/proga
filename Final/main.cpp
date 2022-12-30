#include <iostream>
#include <string>
#include "Node.h"
#include "Tree.h"

void tree_reader(Tree*& tree);

int main() {
	Tree* a;
	tree_reader(a);
	a->printer();
	
	return 0;
}

void tree_reader(Tree*& tree) {
	int t;
	std::cin >> t;
	tree = tree->insert(nullptr, t);
	std::cin >> t;
	while (t != 0) {
		tree = tree->insert(tree, t);
		std::cin >> t;
	}
	return;
}