#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}