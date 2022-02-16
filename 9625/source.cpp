#include <iostream>

int main()
{
	int k;
	std::cin >> k;
	if (k == 1) {
		std::printf("0 1\n");
		return 0;
	}
	else if (k == 2) {
		std::printf("1 1\n");
		return 0;
	}
	int earlier_A = 1, earlier_B = 1;
	int current_A = 0, current_B = 0;
	for (int i = 3; i <= k; i++) {
		current_B = earlier_B + earlier_A;
		current_A = earlier_B;
		earlier_B = current_B;
		earlier_A = current_A;
	}
	std::printf("%d %d\n", current_A, current_B);
}