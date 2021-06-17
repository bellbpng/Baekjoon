#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		vector<int> v(n + 1);
		vector<int> prime;
		for (int j = 2; j <= n; j++) { v[j] = j; }
		for (int j = 2; j <= sqrt(n); j++) {
			if (v[j] == 0) continue;
			for (int k = j + j; k <= n; k+=j) {
				v[k] = 0;
			}
		}
		for (int j = 2; j < n; j++) {
			if (v[j] != 0) { prime.push_back(j); }
		}
		vector<pair<int, int>> gold;
		for (int k = 0; k < prime.size() - 1; k++) {
			if (prime[k] * 2 == n) { 
				gold.push_back(make_pair(prime[k], prime[k])); 
				continue;
			}
			for (int l = k + 1; l < prime.size(); l++) {
				int tmp = prime[k] + prime[l];
				if (tmp == n) { gold.push_back(make_pair(prime[k], prime[l])); }
			}
		}
		if (gold.size() == 1) { 
			printf("%d %d\n", gold.front().first, gold.front().second); 
		}
		else {
			int min = abs(gold.front().first - gold.front().second);
			int idx = 0;
			for (int j = 1; j < gold.size(); j++) {
				int diff = abs(gold[j].first - gold[j].second);
				if (min > diff) {
					min = diff;
					idx = j;
				}
			}
			printf("%d %d\n", gold[idx].first, gold[idx].second);
		}
	}
}