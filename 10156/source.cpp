#include <iostream>
using namespace std;

int main()
{
	int K, N, M;
	scanf("%d %d %d", &K, &N, &M);
	int price = K * N;
	if (price > M)
		printf("%d\n", price - M);
	else
		printf("0\n");
}