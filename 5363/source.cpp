#include <iostream>
#include <sstream>

int main()
{
	int n;
	std::cin >> n;
	std::getchar();
	for (int i = 0; i < n; i++) {
		std::string s;
		std::getline(std::cin, s);
		std::stringstream stm;
		stm.str(s);
		std::string first, second;
		stm >> first >> second;
		int cnt = 0, idx = 0;
		for (int j = 0; j < s.length(); j++) {
			if (cnt == 2) break;
			if (s[j] == ' ') {
				idx = j; cnt++;
			}
		}
		char* ptr = &s[idx + 1];
		std::cout << ptr << " " << first << " " << second << "\n";
	}
}