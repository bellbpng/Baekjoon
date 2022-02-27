#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;
	int gandalf[6] = { 1,2,3,3,4,10 };
	int shauron[7] = { 1,2,2,2,3,5,10 };
	for (int i = 0; i < t; i++) {
		unsigned gandalf_total = 0, shauron_total = 0;
		for (int idx = 0; idx < 6; idx++) {
			int tmp = 0;
			std::cin >> tmp;
			gandalf_total += tmp * gandalf[idx];
		}
		for (int idx = 0; idx < 7; idx++) {
			int tmp = 0;
			std::cin >> tmp;
			shauron_total += tmp * shauron[idx];
		}
		std::cout << "Battle " << i + 1 << ": ";
		if (gandalf_total > shauron_total) std::cout << "Good triumphs over Evil\n";
		else if (gandalf_total < shauron_total) std::cout << "Evil eradicates all trace of Good\n";
		else std::cout << "No victor on this battle field\n";
	}
}