#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

std::vector<long long> maximumEvenSplit(long long finalSum) {
	std::vector<long long> result;

	if (finalSum % 2 == 1)
		return {};
	
	long long currentEven = 2;
	long long remainingSum = finalSum;

	while(remainingSum >= currentEven) {
		result.push_back(currentEven);
		remainingSum -= currentEven;
		currentEven += 2;
	}
	if (remainingSum > 0) {
		result.back() += remainingSum;
	}
	return result;
}

int main() {
	long long finalSum = 12;

	std::vector<long long> result = maximumEvenSplit(finalSum);
	for (int index : result)
		std::cout << index << " ";
	std::cout << std::endl;

	return 0;
}