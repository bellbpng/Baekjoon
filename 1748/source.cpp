#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int num = N / 10, digits = 1;
	while (num != 0) {
		digits++;
		num /= 10;
	}
	unsigned int result = 0;
	for (unsigned int i = 1; i < digits; i++)
		result += i * 9 * pow(10, i - 1);
	switch (digits) {
	case 1: result = N; break;
	case 2: result += (N - 9) * 2; break;
	case 3: result += (N - 99) * 3; break;
	case 4: result += (N - 999) * 4; break;
	case 5: result += (N - 9999) * 5; break;
	case 6: result += (N - 99999) * 6; break;
	case 7: result += (N - 999999) * 7; break;
	case 8: result += (N - 9999999) * 8; break;
	case 9: result += (N - 99999999) * 9; break;
	}
	printf("%ld\n", result);
}