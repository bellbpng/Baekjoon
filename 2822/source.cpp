#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	return a.first > b.first;
}

int main()
{
	vector<pair<int, int>> v(8);
	vector<int> idx(5);
	for (int i = 0; i < 8; i++) {
		scanf("%d", &v[i].first);
		v[i].second = i + 1;
	}
	sort(v.begin(), v.end(), cmp);
	int total = 0;
	for (int i = 0; i < 5; i++) total += v[i].first;
	printf("%d\n", total);
	for (int i = 0; i < 5; i++) idx[i] = v[i].second;
	sort(idx.begin(), idx.end());
	for (int i = 0; i < 5; i++) printf("%d ", idx[i]);
}