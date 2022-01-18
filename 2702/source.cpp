#include <iostream>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int start = a;
		int end = b;
		int tmp = a % b;
		while (tmp != 0) {
			start = end;
			end = tmp;
			tmp = start % end;
		}
		int min = end * (a / end) * (b / end);
		printf("%d %d\n", min, end);
	}
}