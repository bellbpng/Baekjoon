#include <iostream>
using namespace std;

int main()
{
	int T, x, y, z;
	cin >> T;
	x = T / 300;
	T %= 300;
	y = T / 60;
	T %= 60;
	z = T / 10;
	T %= 10;
	if (T != 0) { printf("-1\n"); }
	else { printf("%d %d %d", x, y, z); }
}