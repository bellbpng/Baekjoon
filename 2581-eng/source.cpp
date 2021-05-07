#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool checkPrime(int num);

int main()
{
	int M, N;
	cin >> M >> N;

	int sum = 0;
	vector<int> prime;
	for (int i = M; i <= N; i++) {
		if (checkPrime(i)) {
			prime.push_back(i);
			sum += i;
		}
	}
	if (prime.empty()) {
		printf("-1\n");
		return 0;
	}
	printf("%d\n%d\n", sum, prime[0]);
}

bool checkPrime(int num) {
	if (num == 1) return false;
	else if (num == 2) return true;
	if (num % 2 == 0) return false;
	
	for (int i = 3; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}