#include <iostream>
#include <string>
#define kg 2.2046
#define lb 0.4536
#define liter 0.2642
#define gallon 3.7854

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		float value = 0.0;
		std::string unit;
		std::cin >> value >> unit;
		if (unit == "kg") {
			value = value * kg;
			std::printf("%.4f lb\n", value);
		}
		else if (unit == "lb") {
			value = value * lb;
			std::printf("%.4f kg\n", value);
		}
		else if (unit == "l") {
			value = value * liter;
			std::printf("%.4f g\n", value);
		}
		else {
			value = value * gallon;
			std::printf("%.4f l\n", value);
		}
	}
}