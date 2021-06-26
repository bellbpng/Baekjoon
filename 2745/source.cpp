#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
	string str;
	int B;
	cin >> str >> B;
	int len = str.length();
	int diff = '1' - 1, decimal = 0;
	for (int i = len-1; i >= 0; i--) {
		if (isalpha(str[i])) {
			int tmp = str[i] - 'A' + 10;
			decimal += pow(B, len-i-1) * tmp;
		}
		else {
			decimal += pow(B, len-i-1) * (str[i] - diff);
		}
	}
	printf("%d\n", decimal);
}