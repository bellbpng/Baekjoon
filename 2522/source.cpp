#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) { printf(" "); }
		for (int l = 0; l < i + 1; l++) { printf("*"); }
		printf("\n");
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i + 1; j++) { printf(" "); }
		for (int l = 0; l < n - 1 - i; l++) { printf("*"); }
		printf("\n");
	}
}

