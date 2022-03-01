#include <iostream>
#include <string>

int main()
{
	int p = 0;
	std::cin >> p;
	for (int i = 0; i < p; i++) {
		int cnt[8] = { 0, };
		std::string str;
		std::cin >> str;
		for (int j = 0; j < 38; j++) {
			std::string tmp;
			for (int k = 0; k < 3; k++) {
				char ch = str[j + k];
				tmp.push_back(ch);
			}
			if (tmp == "TTT") cnt[0]++;
			else if (tmp == "TTH") cnt[1]++;
			else if (tmp == "THT") cnt[2]++;
			else if (tmp == "THH") cnt[3]++;
			else if (tmp == "HTT") cnt[4]++;
			else if (tmp == "HTH") cnt[5]++;
			else if (tmp == "HHT") cnt[6]++;
			else if (tmp == "HHH") cnt[7]++;
		}
		for (int j = 0; j < 8; j++)
			std::cout << cnt[j] << " ";
		std::cout << "\n";
	}
}