#include <iostream>

int main()
{
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum != 180) {
		std::cout << "Error\n"; return 0;
	}
	int cnt = 0;
	if (a == b) cnt++;
	if (a == c) cnt++;
	if (b == c) cnt++;
	switch (cnt) {
	case 0: std::cout << "Scalene\n"; break;
	case 1: std::cout << "Isosceles\n"; break;
	default: std::cout << "Equilateral\n";
	}
}