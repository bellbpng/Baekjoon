#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N-1; j++)
			printf(" ");
		printf("*");
		if (i > 0 && i < N - 1) {
			for (int k = 1; k < i * 2; k++)
				printf(" ");
		}
		else {
			for (int k = 1; k < i * 2; k++)
				printf("*");
		}
		if (i > 0)
			printf("*\n");
		else
			printf("\n");
	}
}