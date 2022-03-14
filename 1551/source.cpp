#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
	int n = 0, k = 0;
	std::cin >> n >> k;
	std::getchar();

	std::string str;
	std::cin >> str;
	std::stringstream ss(str);
	std::string token;
	std::vector<int> a(n);

	int i = 0;
	while (std::getline(ss, token, ',')) {
		a[i++] = std::stoi(token);
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n - i - 1; j++)
			a[j] = a[j + 1] - a[j];
	}
	for (int i = 0; i < n - k - 1; i++)
		std::cout << a[i] << ",";
	std::cout << a[n - k - 1] << "\n";
}