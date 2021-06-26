#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int height = 10;
	for (int i = 1; i < len; i++) {
		if (str[i - 1] == str[i]) height += 5;
		else height += 10;
	}
	printf("%d\n", height);
}