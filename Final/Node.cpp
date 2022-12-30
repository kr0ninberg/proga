#include "Node.h"
#include <iostream>

int Node::get_data() const {
	return data;
}
Node* Node::get_left() const {
	return left;
}
Node* Node::get_right() const {
	return right;
}
void Node::set_left(Node* left) {
	this->left = left;
	return;
}
void Node::set_right(Node*) {
	this->left = left;
	return;
}

Node::Node() : Node(1){}
Node::Node(int data) : data(data), left(nullptr), right(nullptr) {} // initializes with data and nullptr


void Node::insert(int data) {
	if (data < this->data) {
		if (!left) {
			Node* new_node = new Node(data);
			left = new_node;
			return;
		}
		left->insert(data);
		return;
	}
	else {
		if (!right) {
			Node* new_node = new Node(data);
			right = new_node;
			return;
		}
		right->insert(data);
		return;
	}
	return;
}


Node* Node::seek(int data) {
	if (this->data == data) return this;
	else if (data >= this->data) {
		if (!right) return nullptr;
		return right->seek(data);
	}
	else {
		if (!left) return nullptr;
		return left->seek(data);
	}
	return left;
}


void Node::remove(int data) {
	Node* removing = seek(data);
	if (!removing) {
		std::cout << "Нет такого числа.\n";
		return;
	}
	remove(removing);
	return;
}

void Node::remove(Node* removing) {
	if (!removing->left && !removing->right) {
		std::cout << "Last node deleted!\n";
		delete removing;
	} 
	else if (!removing->left) {
		Node* will_deleted = removing->right;
		removing->data = removing->right->data;
		removing->left = removing->right->left;
		removing->right = removing->right->right;
		delete will_deleted;
	}
	else if (!removing->right) {
		Node* will_deleted = removing->left;
		removing->data = removing->left->data;
		removing->right = removing->left->right;
		removing->left = removing->left->left;
		delete will_deleted;
	}
	else {
		Node** leftmax = &removing->left;
		while ((*leftmax)->right) leftmax = &((*leftmax)->right);
		Node* will_deleted = *leftmax;
		removing->data = (*leftmax)->data;
		*leftmax = (*leftmax)->left;
		delete will_deleted;
	}
	return;
}


void Node::printer() const {
	std::cout << data << " ";
	if (left != nullptr) left->printer();
	if (right != nullptr) right->printer();
	return;
}

int Node::find_height() const {
	if (left == nullptr && right == nullptr) return 1;
	else if (left == nullptr) return right->find_height() + 1;
	else if (right == nullptr) return left->find_height() + 1;
	int a = left->find_height();
	int b = right->find_height();
	return ((a > b) ? a : b) + 1;
}
