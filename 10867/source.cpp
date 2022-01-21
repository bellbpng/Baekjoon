#include <iostream>
#include <vector>
using namespace std;

void sortAscend(vector<int>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				int tmp;
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
			else if (v[i] == v[j]) {
				v.erase(v.begin() + j);
				j--;
			}
		}
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> v(N, 0);
	for (int i = 0; i < N; i++)
		scanf("%d", &v[i]);
	sortAscend(v);
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i]);
}