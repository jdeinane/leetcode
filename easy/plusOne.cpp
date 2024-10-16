#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

std::vector<int> plusOne(std::vector<int> &digits) {
	int n = digits.size();
	int i = n - 1;

	while (i >= 0) {
		if (digits[i] < 9) {
			digits[i]++;
			return digits;
		}
		digits[i] = 0;
		i--;
	}
	std::vector<int> newN(n + 1, 0);
	newN[0] = 1;
	return newN;
}

int main() {
	std::vector<int> digits;
	digits.push_back(1);
	digits.push_back(9);
	// digits.push_back(3);

	std::vector<int> result = plusOne(digits);

	if (!digits.empty())
	{
		for (int index : result)
			std::cout << index << " ";
		std::cout << std::endl;
	}
	return 0;
}