#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
	string hexa;
	cin >> hexa;
	int diff = '1' - 1;
	int len = hexa.length();
	int result = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (isalpha(hexa[i])) {
			result += pow(16, len - 1 - i) * (hexa[i] - 'A' + 10);
		}
		else {
			result += pow(16, len - 1 - i) * (hexa[i] - diff);
		}
	}
	printf("%d\n", result);
}