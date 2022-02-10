#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool cmp(const std::string& str1, const std::string& str2) {
	return str1 < str2;
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> no_hear(n);
	int len = n < m ? n : m;
	int idx = 0;
	std::vector<std::string> result(len);
	for (int i = 0; i < n; i++)
		std::cin >> no_hear[i];
	std::sort(no_hear.begin(), no_hear.end(), cmp);
	for (int i = 0; i < m; i++) {
		std::string str;
		std::cin >> str;
		if (std::binary_search(no_hear.begin(), no_hear.end(), str))
			result[idx++] = str;
	}
	std::sort(result.begin(), result.begin() + idx, cmp);
	printf("%d\n", idx);
	for (int i = 0; i < idx; i++)
		std::cout << result[i] << "\n";
}