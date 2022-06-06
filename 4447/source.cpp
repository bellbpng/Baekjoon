#include <iostream>
#include <string>
#include <cctype>

int main()
{
	int n = 0;
	std::cin >> n;
	std::getchar();
	for (int i = 0; i < n; i++) {
		std::string name;
		std::getline(std::cin, name);
		std::string str = name;

		int diff = 'a' - 'A';
		int cnt_g = 0, cnt_b = 0;
		int len = name.length();
		for (int j = 0; j < len; j++) {
			if(std::isupper(str[j])) str[j] += diff;
			if (str[j] == 'g') cnt_g++;
			else if (str[j] == 'b') cnt_b++;
		}
		if (cnt_g > cnt_b) std::cout << name << " is GOOD\n";
		else if (cnt_g < cnt_b) std::cout << name << " is A BADDY\n";
		else std::cout << name << " is NEUTRAL\n";
	}
}