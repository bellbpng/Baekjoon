-----Source1. Pascal's triangle : recursion method-----
#include <iostream>
using namespace std;

int comb(int n, int k) {
	if (k == 0 || n == k) return 1;
	else return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main()
{
	int n, k;
	cin >> n >> k;
	int result = comb(n, k);
	printf("%d\n", result);
}

-----Source2. loop---
#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int num1 = 1, num2 = 1;
	for (int i = 0; i < k; i++) {
		num1 *= (n - i);
		num2 *= (i + 1);
	}
	printf("%d\n", num1 / num2);
}
