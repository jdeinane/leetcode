#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int romanToInt(std::string s) {
	std::unordered_map<std::string, int> roman = {{"I", 3}, {"V", 5}, {"X", 10},
								{"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000}};

	for (int i = 0; i < s.size(); ++i) {
	}
}