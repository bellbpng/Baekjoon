#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int d, n, s, p;
		std::cin >> d >> n >> s >> p;
		int paral_time = d + n * p;
		int serial_time = n * s;
		if (paral_time > serial_time) std::cout << "do not parallelize\n";
		else if (paral_time == serial_time) std::cout << "does not matter\n";
		else std::cout << "parallelize\n";
	}
}