#include <iostream>
#include <vector>

int maxCom(const int& a, const int& b) {
	int first = 0, second = 0;
	if (a > b) first = a, second = b;
	else first = b, second = a;
	int r = first % second;

	while (r != 0) {
		first = second, second = r;
		r = first % second;
	}
	return second;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n);
	
	for (int i = 0; i < n; i++) std::cin >> v[i];

	int max = maxCom(v[0], v[1]);
	if (n == 3) max = maxCom(max, v[2]);
	
	for (int i = 1; i <= max; i++)
		if (max % i == 0) std::cout << i << "\n";
}

