#include <iostream>
using namespace std;

int main()
{
	unsigned int S;
	cin >> S;
	unsigned long long sum = 0;
	int i = 1;
	while (sum <= S) {
		sum += i++;
	}
	if (sum > S)
		i--;
	printf("%d\n", i-1);
}