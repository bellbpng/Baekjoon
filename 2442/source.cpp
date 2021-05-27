#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int l = 1;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N - 1; j++) { printf(" "); }
		for (int k = 2 * N - l; k <= 2 * N - 1; k++) { printf("*"); }
		l += 2;
		printf("\n");
	}
}