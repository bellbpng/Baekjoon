#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		int num = a / b;
		int top = a % b;
		int bottom = b;
		printf("%d %d / %d\n", num, top, bottom);
	}
}