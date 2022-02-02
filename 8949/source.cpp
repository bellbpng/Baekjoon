#include <iostream>
#include <string>

int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;
	int len1 = str1.length();
	int len2 = str2.length();
	bool chk = true;
	int len_long = 0, len_short = 0;
	if (len1 >= len2) {
		len_long = len1;
		len_short = len2;
	}
	else {
		chk = false;
		len_long = len2;
		len_short = len1;
	}
	int j = len_short - len_long;
	for (int i = 0; i < len_long; i++) {
		if (j >= 0) {
			if (chk) {
				int num1 = str1[i] - '0';
				int num2 = str2[j++] - '0';
				std::cout << num1 + num2;
			}
			else {
				int num1 = str1[j++] - '0';
				int num2 = str2[i] - '0';
				std::cout << num1 + num2;
			}
		}
		else {
			int num = 0;
			if (chk) 
				num = str1[i] - '0';
			else 
				num = str2[i] - '0';	
			std::cout << num;
			j++;
		}
	}
}