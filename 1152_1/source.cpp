#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	int index = 0, count = 0;
	while (true) {
		if (str[index] == NULL) { break; }
		else if (str[index] == ' ') { index++; }
		else if (isalpha(str[index++])) {
			while (str[index] != ' ' && str[index] != NULL) { index++; }
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}