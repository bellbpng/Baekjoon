##Solution 1##
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int k = 0;
	for (int i = 0; i < str.length(); i++) {
		k++;
		if (k == 10) { str.insert(++i, 1, '\n'); k = 0; }
	}
	cout << str;

	return 0;
}

##Solution 2##
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int k = 0;

	for (int i = 0; i < str.length(); i++) {
		k++;
		printf("%c", str[i]);
		if (k == 10) { printf("\n"); k = 0; }
	}

	return 0;
}