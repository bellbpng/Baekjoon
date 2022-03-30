#include <iostream>
#include <string>

int main()
{
	int r, c, zr, zc;
	std::cin >> r >> c >> zr >> zc;
	for (int i = 0; i < r; i++) {
		std::string str;
		std::cin >> str;
		for (int j = 0; j < zr; j++) {
			for (int l = 0; l < c; l++)
				for (int k = 0; k < zc; k++)
					std::cout << str[l];
			std::cout << "\n";
		}
	}
}