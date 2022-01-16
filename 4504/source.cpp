#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (true) {
		int num;
		cin >> num;
		if (num == 0) break;
		if (num % n == 0)
			printf("%d is a multiple of %d.\n", num, n);
		else
			printf("%d is NOT a multiple of %d.\n", num, n);
	}
}