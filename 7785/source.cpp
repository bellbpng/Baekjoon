#include <iostream>
#include <string>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	std::cin >> n;
	std::map<std::string, bool, std::greater<std::string>> list;
	
	for (int i = 0; i < n; i++) {
		std::string name, state;
		std::cin >> name >> state;
		if (state == "enter") list[name] = true;
		else list[name] = false;
	}

	for (auto iter : list) {
		if (iter.second)
			std::cout << iter.first << "\n";
	}
}