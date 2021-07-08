#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int cnt = 1;
	for (int i = 0; i < len; i++) {
		if (str[i] == ',') cnt++;
	}
	printf("%d\n", cnt);
}