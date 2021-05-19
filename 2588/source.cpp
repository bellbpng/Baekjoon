#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int val1, val2, val3, result;
	val1 = num1 * (num2 % 10);
	val2 = num1 * (num2 / 10 % 10);
	val3 = num1 * (num2 / 100);
	result = val1 + 10 * val2 + 100 * val3;

	printf("%d\n%d\n%d\n%d\n", val1, val2, val3, result);

	return 0;
}