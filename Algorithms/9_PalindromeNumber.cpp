#include "Easy.h"
#include <string>

bool SolutionPalindromeNumber::solution(int x) {
	if (x < 0) {
		return false;
	}
	std::string strX = std::to_string(x);
	int p1 = 0, p2 = strX.size() - 1;
	while (strX[p1] == strX[p2] && p1 < p2) {
		p1++; p2--;
	}
	return p1 >= p2;
};
