#include "LinkedList.h"
#include "Easy.h"
#include <iostream>
#include <vector>


int main()
{
	std::vector<int> v = { 5,8,4,3 };

	//LinkedList* l = new LinkedList();
	LinkedList* l = new LinkedList(v);

	l->print();


	/*SolutionTwoSum s;
	std::vector<int> sol = s.solution(v, 9);
	for (int i = 0; i < sol.size(); i++) {
		std::cout << sol[i] << std::endl;
	}*/
}
