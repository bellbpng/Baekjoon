#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	string str1 = n1 + n2;
	string str2 = n3 + n4;
	unsigned long long num1 = stoll(str1);
	unsigned long long num2 = stoll(str2);
	unsigned long long result = num1 + num2;
	printf("%lld\n", result);
}

