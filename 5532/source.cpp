#include <iostream>

int main()
{
	int L, A, B, C, D;
	std::cin >> L >> A >> B >> C >> D;
	int day_A = A / C;
	if (A % C != 0) day_A++;
	int day_B = B / D;
	if (B % D != 0) day_B++;
	int work_day = day_A > day_B ? day_A : day_B;
	std::cout << L - work_day;
}