#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0;
	std::cin >> n;
	std::vector<long long> v(n, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	sort(v.begin(), v.end());

	int cnt = 1, max = 1;
	std::vector<long long> val;

	for (int i = 0; i < n - 1; i++) {
		if (v[i] == v[i + 1]) cnt++;
		else {
			if (cnt > max) {
				val.clear();
				val.push_back(v[i]);
			}
			else if (cnt == max) {
				val.push_back(v[i]);
			}
			max = cnt; cnt = 1;
		}
	}
	long long result = 0;
	if (cnt > max) result = v[n - 1];
	else result = val[0];
	std::cout << result << "\n";
}