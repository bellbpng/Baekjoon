#include <iostream>
using namespace std;

int main()
{
	int T;
	int A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		scanf("%d,%d", &A, &B);
		printf("%d\n", A + B);
	}
}