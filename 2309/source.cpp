#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v(9);
	for (int i = 0; i < 9; i++) {
		cin >> v[i];
	}

	int height = 0;
	for (int i = 0; i < 9; i++) {
		height += v[i];
	}

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			int tmp = height - v[i] - v[j];
			if (tmp == 100) {
				v[i] = 0, v[j] = 0;
				sort(v.begin(), v.end());
				for (int k = 2; k < v.size(); k++) {
					printf("%d\n", v[k]);
				}
				return 0;
			}
		}
	}
}