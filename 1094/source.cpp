#include <iostream>
#include <vector>

int main()
{
	int x = 0;
	std::cin >> x;
	std::vector<int> v;
	v.push_back(64);
	int len = 64;
	while (true) {
		if (len == x) break;
		else if (len > x) {
			int idx = v.size() - 1;
			int min = v[idx];
			int piece = min / 2;
			v[idx] = piece;
			int sum = 0;
			for (auto iter : v)
				sum += iter;
			if (sum < x) {
				v.push_back(piece);
				len = sum + piece;
			}
			else len = sum;
		}
	}
	std::cout << v.size() << "\n";
}


-----------비트마스킹을 이용한 풀이법--------------
#include <iostream>

int main()
{
	int x = 0;
	std::cin >> x;
	int cnt = 0;
	while (x > 0) {
		if (x % 2 == 1) cnt++;
		x /= 2;
	}
	std::cout << cnt << "\n";
}
