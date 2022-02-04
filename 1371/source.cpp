#include <iostream>
#include <string>

int alpha_cnt[26] = { 0, };

int findMax() {
	int max = alpha_cnt[0];
	for (int i = 1; i < 26; i++)
		if (max < alpha_cnt[i]) max = alpha_cnt[i];
	return max;
}

int main()
{
	std::string str;
	while (true) {
		std::cin >> str;
		if (std::cin.eof() == true) break;
		int len = str.length();
		for (int i = 0; i < len; i++) {
			int idx = str[i] - 'a';
			alpha_cnt[idx]++;
		}
	}
	int max = findMax();
	for (int i = 0; i < 26; i++) {
		if (max == alpha_cnt[i]) {
			char ch = i + 'a';
			std::cout << ch;
		}
	}
}