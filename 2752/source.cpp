#include <iostream>
using namespace std;

int main()
{
	int num[3] = { 0, };
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("%d %d %d\n", num[0], num[1], num[2]);
}