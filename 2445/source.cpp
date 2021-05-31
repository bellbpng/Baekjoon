#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i + 1; k++) { printf("*"); }
		for (int l = 0; l < 2 * (N - i - 1); l++) { printf(" "); }
		for (int k = 0; k < i + 1; k++) { printf("*"); }
		printf("\n");
	}

	for (int i = 0; i < N - 1; i++) {
		for (int k = 0; k < N - 1 - i; k++) { printf("*"); }
		for (int l = 0; l < 2 * (i + 1); l++) { printf(" "); }
		for (int k = 0; k < N - 1 - i; k++) { printf("*"); }
		printf("\n");
	}
}