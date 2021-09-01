#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int num;
	int len = str.length();
	if (str[1] == 'x')
		num = stoi(str, nullptr, 16);
	else if (str[0] == '0' && len > 1)
		num = stoi(str, nullptr, 8);
	else
		num = stoi(str, nullptr, 10);
	printf("%d\n", num);
}