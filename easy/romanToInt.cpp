#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <fstream>

int romanToInt(std::string s) {
    std::unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

	int result = map[s[s.length() - 1]];
	
	for (int i = s.length() - 2; i >= 0; i--) {
		if (map[s[i]] < map[s[i + 1]])
			result -= map[s[i]];
		else
			result += map[s[i]];
	}
	return result;
}

int main() {
	std::string s = "MCMXCIV";
	int result = romanToInt(s);

	std::cout << result << std::endl;
	return 0;
}