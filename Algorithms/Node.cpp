#include "Node.h"
#include <iostream>

Node::Node() {
	this->value = 0;
	this->next = nullptr;
}
Node::Node(int nodeValue) {
	this->value = nodeValue;
	this->next = nullptr;
}

void Node::print() {
	std::cout << this->value << " ";
}