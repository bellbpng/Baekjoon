#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N - 1; j++) {
			printf(" ");
		}
		for (int l = 0; l <= i; l++) {
			printf("*");
		}
		printf("\n");
	}
}