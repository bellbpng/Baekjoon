#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v(3);
	while (true) {
		std::cin >> v[0] >> v[1] >> v[2];
		if ((v[0] == 0 && v[1] == 0) && v[2] == 0) break;
		std::sort(v.begin(), v.end(), std::greater<>());
		if (v[0] >= v[1] + v[2]) std::cout << "Invalid\n";
		else if (v[0] == v[1]) {
			if (v[1] == v[2]) std::cout << "Equilateral\n";
			else std::cout << "Isosceles\n";
		}
		else if (v[1] == v[2] || v[0] == v[2]) std::cout << "Isosceles\n";
		else std::cout << "Scalene\n";
	}
}