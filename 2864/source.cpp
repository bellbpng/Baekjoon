#include <iostream>
#include <string>

int main()
{
	std::string a, b;
	std::cin >> a >> b;
	int len_a = a.length();
	int len_b = b.length();
	std::string a_max = a, b_max = b;

	for (int i = 0; i < len_a; i++) {
		if (a[i] == '5') a_max[i]++;
		else if (a[i] == '6') a[i]--;
	}
	for (int i = 0; i < len_b; i++) {
		if (b[i] == '5') b_max[i]++;
		else if (b[i] == '6') b[i]--;
	}
	int min = stoi(a) + stoi(b);
	int max = stoi(a_max) + stoi(b_max);
	std::cout << min << " " << max << "\n";
}
