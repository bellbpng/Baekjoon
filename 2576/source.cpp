#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> num;
	for (int i = 0; i < 7; i++) {
		int tmp;
		cin >> tmp;
		if (tmp % 2) { num.push_back(tmp); }
	}

	if (num.empty()) {
		printf("-1\n");
		return 0;
	}

	int sum = 0;
	int min = *min_element(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) {
		sum += num[i];
	}
	printf("%d\n%d\n", sum, min);
}