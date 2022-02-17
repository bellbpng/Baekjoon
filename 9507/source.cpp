#include <iostream>

int main()
{
	int t;
	std::scanf("%d", &t);
	long long koong[68] = { 1, 1, };
	koong[2] = 2, koong[3] = 4;
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		for (int j = 4; j <= n; j++)
			koong[j] = koong[j - 1] + koong[j - 2] + koong[j - 3] + koong[j - 4];
		std::printf("%lld\n", koong[n]);
	}
}