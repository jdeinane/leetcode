#include <iostream>
#include <string>

bool isPalindrome(int x) {

	std::string str = std::to_string(x);
	int y = str.length();

	if (x < 0)
		return false;
	
	for (int i = 0; i < y / 2; ++i) {
		if (str[i] != str[y - i - 1]) 
			return false;
	}
	return true;
}

int main()
{
	int number = -12321;
	if (isPalindrome(number))
		std::cout << number << " est un palindrome." << std::endl;
	else
		std::cout << number << " n'est pas un palindrome." << std::endl;
	return 0;
}