#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	while (true) {
		char op = NULL;
		std::cin >> op;
		if (op == '=') break;
		int b = 0;
		std::cin >> b;
		switch (op) {
		case '+': a += b; break;
		case '-': a -= b; break;
		case '*': a *= b; break;
		case '/': a /= b; break;
		}
	}
	std::cout << a << "\n";
}