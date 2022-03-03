#include <iostream>
#include <string>

int main()
{
	int a = 0, b = 0, c = 0;
	std::string str;
	std::cin >> a >> b >> c;
	std::cin >> str;
	int num[3] = { a, b, c };
	for (int i = 0; i < 2; i++) 
		for (int j = i + 1; j < 3; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	for (int i = 0; i < 3; i++) {
		char ch = str[i];
		std::cout << num[ch - 'A'] << " ";
	}
}