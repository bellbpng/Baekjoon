#include <iostream>
#include <cmath>
#include <vector>

bool findPrime(const int& n) {
	for (int j = 3; j <= sqrt(n); j+=2) {
		if (n % j == 0) return false;
	}
	return true;
}

int main()
{
	while (true) {
		int n = 0; 
		std::scanf("%d", &n);
		if (n == 0) break;
		std::vector<int> prime;
		prime.reserve(n);
		prime.push_back(3), prime.push_back(5);
		int diff = 0, a = 0, b = 0;
		bool chk = true;
		for (int i = 7; i <= n/2; i += 2) {
			if (findPrime(i)) prime.push_back(i);
		}
		for (int i = 0; i < prime.size(); i++) {
			int val = n - prime[i];
			if (findPrime(val)) {
				chk = false;
				int tmp = val - prime[i];
				if (tmp > diff) {
					diff = tmp; b = val; a = prime[i];
				}
			}
		}
		if (chk) std::printf("Goldbach's conjecture is wrong.\n");
		else std::printf("%d = %d + %d\n", n, a, b);
	}
}