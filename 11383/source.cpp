#include <iostream>
#include <vector>
#include <string>

int main()
{
	int n = 0, m = 0;
	std::cin >> n >> m;
	std::vector<std::string> origin(n);
	for (int i = 0; i < n; i++)
		std::cin >> origin[i];

	bool chk = true;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		std::string recon;
		for (int j = 1; j < str.length(); j += 2)
			recon.push_back(str[j]);
		if (origin[i] != recon) chk = false;
	}

	if (chk) std::cout << "Eyfa\n";
	else std::cout << "Not Eyfa\n";
}