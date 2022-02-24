#include <iostream>

int main()
{
	while(true) {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;
		if ((a == 0 && b == 0) && c == 0) break;
		int next = 0;	
		if ((b - a) == (c - b)) {
			std::cout << "AP ";
			next = c + b - a;
		}
		else {
			std::cout << "GP ";
			int r = b / a;
			next = c * r;
		}
		std::cout << next << "\n";
	}
}