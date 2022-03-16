#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string str;	
		std::cin >> str;
		const int len = str.length();
		const int border = std::sqrt(len);

		std::vector<std::vector<char>> letter(border, std::vector<char>(border));
		int k = 0;

		for (int row = 0; row < border; row++) {
			for (int col = 0; col < border; col++) {
				letter[row][col] = str[k++];
			}
		}

		for (int col = border - 1; col >= 0; col--) {
			for (int row = 0; row < border; row++) {
				std::cout << letter[row][col];
			}
		}
		std::cout << "\n";
	}
}
