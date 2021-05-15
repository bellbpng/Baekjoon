#include <iostream>
using namespace std;

int main()
{
	int n, l = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) { printf(" "); }
		for (int k = l; k < 2 * n; k++) { printf("*"); }
		printf("\n");
		l += 2;
	}

	l = 2 * n - 3;
	for (int i = 2; i <= n; i++) {
		for (int j = i; j < n; j++) { printf(" "); }
		for (int k = l; k < 2 * n; k++) { printf("*"); }
		printf("\n");
		l -= 2;
	}
}