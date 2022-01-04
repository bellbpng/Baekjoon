#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const int& a, const int& b);
int findDiff(vector<int> v);

int main()
{
	int K = 0;
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		int n = 0;
		scanf("%d", &n);
		vector<int> math(n);
		for (int j = 0; j < n; j++)
			scanf("%d", &math[j]);
		sort(math.begin(), math.end(), cmp);
		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", math[0], math[n - 1], findDiff(math));
	}
}

bool cmp(const int& a, const int& b) {
	return a > b;
}

int findDiff(vector<int> v) {
	int diff = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		int tmp = v[i] - v[i + 1];
		if (tmp > diff) diff = tmp;
	}
	return diff;
}