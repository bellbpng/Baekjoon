#include <iostream>
using namespace std;

int find_gcf(const int &a, const int &b) {
	int big = a > b ? a : b;
	int small = a < b ? a : b;
	while (true) {
		if (big % small == 0) return small;
		int tmp = big;
		big = small;
		small = tmp % small;
	}
}

int main()
{
	int num1, den1, num2, den2;
	scanf("%d %d", &num1, &den1);
	scanf("%d %d", &num2, &den2);
	int gcf_first = find_gcf(den1, den2);
	int lcm = (den1 / gcf_first) * (den2 / gcf_first) * gcf_first;
	int m1 = lcm / den1, m2 = lcm / den2;
	int sum_num = num1 * m1 + num2 * m2;
	int gcf_result = find_gcf(sum_num, lcm);
	printf("%d %d\n", sum_num / gcf_result, lcm / gcf_result);
}