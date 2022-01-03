#include <iostream>
#include <vector>
using namespace std;

void sortAscend(vector<int>& v);

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		vector<int> store(n);
		for (int j = 0; j < n; j++)
			scanf("%d", &store[j]);
		sortAscend(store);
		int distance = 2 * (store[n - 1] - store[0]);
		printf("%d\n", distance);
	}
}

void sortAscend(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}