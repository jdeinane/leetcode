#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

//		USING HASHMAP

std::vector<int> twoSum(std::vector<int> &nums, int target) {
	std::unordered_map<int, int> hashTable;
	std::vector<int> target_indices;

	for (int i = 0; i < nums.size(); i++) {
		int secondInt = target - nums.at(i);
		if (hashTable.find(secondInt) != hashTable.end()) {
			target_indices.push_back(i);
			target_indices.push_back(hashTable.find(secondInt)->second);
			break;
		}
		else
			hashTable[nums.at(i)];
	}
	return target_indices;
}

	// 		USING BRUTEFORCE
	// std::vector<int> twoSum(std::vector<int> &nums, int target) {
	// 	std::vector<int> target_indices;

	// 	for (int i = 0; i < nums.size(); ++i) {
	// 		for (int k = i + 1; k < nums.size(); ++k) {
	// 			if (nums.at(i) + nums.at(k) == target) {
	// 				target_indices.push_back(i);
	// 				target_indices.push_back(k);
	// 			}
	// 		}
	// 	}
	// 	return target_indices;
	// }

	int main()
{
	std::vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);

	int target = 9;

	std::vector<int> result = twoSum(nums, target);
	for (int index : result)
		std::cout << index << " ";
	std::cout << std::endl;

	return 0;
}