#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include"Node.h"
#include<vector>

class LinkedList {
private:
	int length = 0;
public:
	Node* head;

	LinkedList();
	LinkedList(std::vector<int>);

	void insert(int);
	void push(int);
	bool remove(int);
	void empty();
	void print();

	void getLength();
};

#endif

