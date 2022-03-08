#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int n = 0, b = 0;
	std::cin >> n >> b;
	std::string str;
	char ch; int r = 0;
	while (n / b != 0) {
		r = n % b;
		n /= b;
		if (r > 9) ch = r + 55;
		else ch = r + '0';
		str.push_back(ch);
	}
	if (n > 9) ch = n + 55;
	else ch = n + '0';
	str.push_back(ch);
	std::reverse(str.begin(), str.end());
	std::cout << str << "\n";
}