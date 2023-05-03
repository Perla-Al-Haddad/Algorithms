#include "Easy.h"
#include <vector>
#include <iostream>
#include <map>


int findIndex(std::vector<int> v, int skip, int target) {
	for (int i = skip + 1; i < v.size(); i++)
		if (v[i] == target)
			return i;
	return -1;
}

std::vector<int> SolutionTwoSum::solution(std::vector<int> nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		int tempTarget = target - nums[i];
		int foundIndex = findIndex(nums, i, tempTarget);
		if (foundIndex > -1) return { i, foundIndex };
	}
};

std::vector<int> SolutionTwoSum::solutionOP(std::vector<int> nums, int target) {
	std::map<int, int> m; // create map

	// loop over numbers
	for (int i = 0; i < nums.size(); i++) {
		// look for the target of the current number
		int tempTarget = target - nums[i];
		// check if the target can be found in the map
		if (m.find(tempTarget) != m.end()) {
			return { m[tempTarget], i };
		}
		// if not, set the index of the current value in the map 
		// this way, we build a map of the index of all previously tried values, so we don't have 
		// to traverse the vector everytime we are potentially looking for them
		m[nums[i]] = i;
	}
}


