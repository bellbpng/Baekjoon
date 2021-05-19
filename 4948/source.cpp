#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int num);

int main()
{
	int n;
	while (true) {
		int cnt = 0;
		cin >> n;
		if (n == 0) break;
		for (int i = n+1; i <= 2 * n; i++) {
			if (checkPrime(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}

bool checkPrime(int num) {
	if (num == 1) return false;
	else if (num == 2) return true;
	if (num % 2 == 0) return false;

	for (int i = 3; i <= sqrt(num); i+=2) {
		if (num % i == 0) return false;
	}
	return true;
}