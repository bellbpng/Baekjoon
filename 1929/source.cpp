#include <cstdio>
#include <cmath>
using namespace std;

bool checkPrime(int number);

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	
	for (int i = M; i <= N; i++) {
		if (checkPrime(i)) { printf("%d\n", i); }
	}
	return 0;
}

bool checkPrime(int number) {
	if (number == 1) { return false; }
	else if (number == 2 || number == 3) { return true; }
	else if (number % 2 == 0) { return false; }
	
	for (int i = 3; i <=sqrt(number); i++) {
		if (number % i == 0) { return false; }
	}

	return true;
}