#include <iostream>
#include <string>

int main()
{
	int N = 0;
	std::cin >> N;
	for (int i = N; i >= 4; i--) {
		std::string tmp = std::to_string(i);
		int len = tmp.length();
		bool chk = true;
		for (int j = 0; j < len; j++) {
			if (tmp[j] == '4' || tmp[j] == '7')
				continue;
			else {
				chk = false;
				break;
			}
		}
		if (chk) {
			std::cout << tmp << "\n";
			break;
		}
	}
}