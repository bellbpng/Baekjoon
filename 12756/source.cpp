#include <iostream>

int main()
{
	int a_attack = 0, a_life = 0;
	int b_attack = 0, b_life = 0;
	std::cin >> a_attack >> a_life;
	std::cin >> b_attack >> b_life;

	while (true) {
		a_life -= b_attack;
		b_life -= a_attack;
		if (a_life <= 0 && b_life <= 0) {
			std::cout << "DRAW\n";
			break;
		}
		else if (a_life <= 0) {
			std::cout << "PLAYER B\n";
			break;
		}
		else if (b_life <= 0) {
			std::cout << "PLAYER A\n";
			break;
		}
	}
}