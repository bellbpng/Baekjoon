#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int D;
	scanf("%d", &D);
	int a = D / 3600;
	D %= 3600;
	int b = D / 60;
	D %= 60;
	int c = D;
	int sec = C + c, min = B + b, hour = A + a;
	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	hour %= 24;
	printf("%d %d %d\n", hour, min, sec);
}