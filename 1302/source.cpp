#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const string& str1, const string& str2) {
	return str1 < str2;
}

int main()
{
	int N;
	cin >> N;
	vector<string> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int max_cnt = 1, idx = 0;
	int cnt = 1;
	for (int i = 0; i < N - 1; i++) {
		if (v[i] == v[i + 1]) cnt++;
		else {
			if (cnt > max_cnt) {
				max_cnt = cnt;
				idx = i;
			}
			cnt = 1;
		}
	}
	if (cnt > max_cnt) idx = N - 1;
	cout << v[idx];
}