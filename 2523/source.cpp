#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) { printf("*"); }
		printf("\n");
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N - 1; j++) { printf("*"); }
		printf("\n");
	}
}