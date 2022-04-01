#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool cmp(const std::pair<long long, int>& p1, const std::pair<long long, int>& p2) {
	return p1.second > p2.second;
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n = 0;
	std::cin >> n;
	std::unordered_map<long long, int> card;

	for (int i = 0; i < n; i++) {
		long long num = 0;
		std::cin >> num;
		if (card.find(num) != card.end()) card[num]++;
		else card[num] = 1;
	}

	std::vector<std::pair<long long, int>> v(card.begin(), card.end());
	std::sort(v.begin(), v.end(), cmp);
	const auto it = v.begin();
	int max_cnt = (*it).second;
	
	std::vector<long long> result;
	for (const auto iter : v)
		if (iter.second == max_cnt) result.push_back(iter.first);

	long long min = *(std::min_element(result.begin(), result.end()));
	std::cout << min << "\n";
}