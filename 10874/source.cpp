#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int answer[10] = { 0, };
	for (int j = 1; j <= 10; j++) {
		answer[j - 1] = (j - 1) % 5 + 1;
	}
	for (int i = 0; i < n; i++) {
		int tmp[10] = { 0, };
		bool chk = true;
		for (int idx = 0; idx < 10; idx++) {
			std::cin >> tmp[idx];
			if (tmp[idx] != answer[idx]) chk = false;			
		}
		if (chk) std::cout << i + 1 << "\n";
	}
}