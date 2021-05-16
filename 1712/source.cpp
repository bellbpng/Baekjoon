#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	if (B >= C) {
		printf("-1\n");
		return 0;
	}

	int profit = C - B;
	int result = A / profit + 1;
	printf("%d\n", result);
}