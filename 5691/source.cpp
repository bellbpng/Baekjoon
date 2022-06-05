#include <iostream>
#include <vector>

int main()
{
	while (true) {
		int a, b;
		std::cin >> a >> b;
		if (a == 0 && b == 0) break;
		std::vector<int> tmp(3);
		tmp[0] = 2 * a - b;
		tmp[1] = -a + 2 * b;
		tmp[2] = (a + b) / 2;
		int min = tmp[0];
		for (int i = 1; i <= 2; i++)
			if (min > tmp[i]) min = tmp[i];
		std::cout << min << "\n";
	}
}