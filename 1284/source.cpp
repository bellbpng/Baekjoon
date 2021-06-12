#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		string str;
		cin >> str;
		if (str == "0") break;
		
		int width = 2;
		for (int i = 0; i < str.length(); i++) {
			char ch;
			ch = str[i];
			switch (ch) {
			case '1': 
				width += 2;
				break;
			case '0':
				width += 4;
				break;
			default:
				width += 3;
				break;
			}
		}
		printf("%d\n", width + str.length() - 1);
	}
}