#include <limits.h>

int myAtoi(char *str)
{
	long long int i = 0;
	int sign = 1;
	long long int res = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '-')
		sign = -1;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res + str[i] - '0';
		i++;
		if (res * sign > INT_MAX)
			return INT_MAX;
		if (res * sign < INT_MIN)
			return INT_MIN;
	}

	return (res * sign);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	char number[] = "-042";
	printf("%d\n", myAtoi(number));
	printf("%d\n", atoi(number));
}