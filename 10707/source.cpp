#include <iostream>

int main()
{
	int a, b, c, d, p;
	std::cin >> a >> b >> c >> d >> p;
	int price = b;
	if (p > c) price += d * (p - c);
	(a* p < price) ? std::cout << a * p << "\n" : std::cout << price << "\n";
}