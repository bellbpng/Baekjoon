#include <iostream>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int sum = 0, tmp = 0, min = 100;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &tmp);
			if (!(tmp % 2)) {
				sum += tmp;
				if (min > tmp) min = tmp;
			}
		}
		printf("%d %d\n", sum, min);
	}
}