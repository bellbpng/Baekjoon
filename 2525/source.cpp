#include <iostream>
using namespace std;

int main()
{
	int hour, min;
	cin >> hour >> min;
	int tmp;
	cin >> tmp;

	int H = tmp / 60;
	int M = tmp % 60;
	if (min + M >= 60) {
		min = (min + M) - 60;
		hour++;
	}
	else min += M;

	hour += H;
	if (hour > 23) hour -= 24;
	printf("%d %d", hour, min);
}