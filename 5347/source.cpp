#include <iostream>

int findMaxCom(const int& a, const int& b) {
	int first = 0, second = 0;
	if (a > b) first = a, second = b;
	else first = b, second = a;
	int tmp = first % second;
	while (tmp != 0) {
		first = second, second = tmp;
		tmp = first % second;
	}
	return second;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		int max = findMaxCom(a, b);
		unsigned long long min = (unsigned long long)a * b / max;
		std::cout << min << std::endl;
	}
}