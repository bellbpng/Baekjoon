#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const int& a, const int& b) {
	return a > b;
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int num[10] = { 0, };
		for (int j = 0; j < 10; j++) {
			scanf("%d", num + j);
		}
		sort(num, num + 10, cmp);
		printf("%d\n", num[2]);
	}
}