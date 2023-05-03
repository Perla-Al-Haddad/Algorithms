#include "LinkedList.h"
#include "Node.h"
#include <vector>
#include <iostream>

LinkedList::LinkedList() {
	this->head = NULL;
};
LinkedList::LinkedList(std::vector<int> list) {
	this->head = NULL;
	this->length = list.size();
	for (int i = 0; i < this->length; i++) this->push(list[i]);
};

void LinkedList::insert(int newValue) {
	Node* newNode = new Node(newValue);
	
	if (this->head == NULL) {
		this->head = newNode;
		return;
	}
	
	newNode->next = this->head;
	this->head = newNode;
}

void LinkedList::push(int newValue) {
	Node* newNode = new Node(newValue);

	if (this->head == NULL) {
		this->head = newNode;
		return;
	}

	Node* curr = this->head;
	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = newNode;
}

bool LinkedList::remove(int deletedValue) {
	Node* curr = this->head;
	Node* prev = NULL;

	if (this->head == NULL) return false;

	if (this->head->value == deletedValue) {
		curr = curr->next;
		delete this->head;
		this->head = curr;
		return true;
	}

	while (curr != NULL) {
		if (curr->value == deletedValue) {
			prev->next = curr->next;
			delete curr;
			return true;
		}
		prev = curr;
		curr = curr->next;
	}

	return false;
}

void LinkedList::empty() {
	Node* curr = this->head;
	Node* temp = NULL;
	while (curr->next != nullptr) {
		temp = curr;
		curr = curr->next;
		delete temp;
	}
	this->head = NULL;
}

void LinkedList::print() {
	Node* curr = this->head;
	if (this->head == NULL) {
		std::cout << "List empty" << std::endl;
		return;
	}
	while (curr != NULL) {
		curr->print();
		curr = curr->next;
	}
	std::cout << std::endl;
}
