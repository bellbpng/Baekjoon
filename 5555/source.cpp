#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	int n;
	std::cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		s = s + s;
		if (s.find(str) != std::string::npos) cnt++;
	}
	std::cout << cnt << "\n";
}