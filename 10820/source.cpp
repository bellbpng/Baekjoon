#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		string str;
		getline(cin, str);
		if (str.empty()) break;
		int lower = 0, upper = 0, num = 0, white = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 97 && str[i] <= 122) lower++;
			else if (str[i] >= 65 && str[i] <= 90) upper++;
			else if (str[i] >= '0' && str[i] <= '9')num++;
			else if (str[i] == ' ') white++;
		}
		printf("%d %d %d %d\n", lower, upper, num, white);
	}
}