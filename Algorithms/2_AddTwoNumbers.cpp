#include "Medium.h"
#include <string>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* insert(ListNode* root, int value) {
	ListNode* temp = new ListNode(value);
	if (!root) {
		root = temp;
	}
	else {
		ListNode* ptr = root;
		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return root;
};

ListNode* arrayToList(std::string str) {
	ListNode* root = new ListNode();
	for (int i = 0; i < str.size(); i++) {
		root = insert(root, str[i]);
	}
	return root;
};

std::string convertToString(ListNode* list) {
	std::string str = "";
	ListNode curr = *list;
	while (curr.next != nullptr) {
		str = std::to_string(curr.val) + str;
		curr = *curr.next;
	}
	return str;
}

ListNode* SolutionAddTwoNumbers::solution(ListNode* l1, ListNode* l2) {
	std::string s1 = convertToString(l1);
	std::string s2 = convertToString(l2);
	int i1 = std::stoi(s1);
	int i2 = std::stoi(s2);
	std::string sum = std::to_string(i1 + i2);
	return arrayToList(sum);
}