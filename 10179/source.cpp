#include <iostream>

int main()
{
	int t = 0;
	std::scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		double price = 0.0;
		std::scanf("%lf", &price);
		std::printf("$%.2lf\n", price * 0.8);
	}
}