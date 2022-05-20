#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v(4);
	for (int i = 0; i < 4; i++)
		std::cin >> v[i];
	int e = 0, f = 0;
	std::cin >> e >> f;
	std::sort(v.begin(), v.end(), std::greater<>());
	int score = v[0] + v[1] + v[2];
	score = score + (e > f ? e : f);
	std::cout << score << "\n";
}