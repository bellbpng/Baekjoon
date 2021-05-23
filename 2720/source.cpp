#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int C, Q, D, N, P;
		cin >> C;
		Q = C / 25;
		C %= 25;
		D = C / 10;
		C %= 10;
		N = C / 5;
		C %= 5;
		P = C;
		printf("%d %d %d %d\n", Q, D, N, P);
	}
}