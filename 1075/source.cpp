#include <iostream>
using namespace std;

int main()
{
	int N, F;
	cin >> N >> F;
	int num = (N / 100) * 100;
	while (true) {
		int tmp = num % F;
		if (tmp == 0)
			break;
		num++;
	}
	int result = num % 100;
	if (result < 10)
		printf("0%d\n", result);
	else
		printf("%d\n", result);
}