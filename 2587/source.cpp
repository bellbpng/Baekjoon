#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num[5] = { 0, };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	sort(num, num+5);
	printf("%d\n%d\n", sum / 5, num[2]);
}