#pragma once

class Node{
public:
	int data;
	Node* left;
	Node* right;

	int get_data() const;
	Node* get_left() const;
	Node* get_right() const;
	void set_left(Node*);
	void set_right(Node*);

	Node();
	Node(int); // initializes with data and nullptr

	virtual void insert(int);
	Node* seek(int);
	void remove(int);
	void remove(Node*);

	void printer() const;
	int find_height() const;
	// virtual void g() = 0;
};
