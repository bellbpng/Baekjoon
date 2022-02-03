#include <iostream>

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		int N, C;
		std::cin >> N >> C;
		int cnt = N / C;
		if (N % C != 0) cnt++;
		std::cout << cnt << std::endl;
	}
}