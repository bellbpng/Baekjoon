#include <iostream>
#include <string>

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string str1, str2;
		std::cin >> str1 >> str2;
		int len = str1.length();
		int cnt = 0;
		for (int j = 0; j < len; j++)
			if (str1[j] != str2[j]) cnt++;
		printf("Hamming distance is %d.\n", cnt);
	}
}