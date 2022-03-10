#include <iostream>
#include <vector>

std::vector<bool> prime(1000001, true);

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	for (int i = 3; i <= 500000; i += 2) {
		for (int j = i + i; j <= 1000000; j += i) {
			if (prime[j] == true) prime[j] = false;
		}
	}
	while (true) {
		int n = 0;
		std::scanf("%d", &n);
		if (n == 0) break;
		bool chk = true;
		int diff = 0, a = 0, b = 0;
		for (int i = 3; i <= n / 2; i += 2) {
			if (prime[i] && prime[n - i]) {
				chk = false;
				int tmp = n - i - i;
				if (tmp >= diff) {
					diff = tmp;
					b = n - i;
					a = i;
				}
			}
		}
		if (chk) std::printf("Goldbach's conjecture is wrong.\n");
		else std::printf("%d = %d + %d\n", n, a, b);
	}
}