#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void changePlace(const int& tmp, const int& i, vector<pair<int, int>>& l) {
	for (int k = tmp; k < i; k++)
		l[k].first++;
}

bool cmp(const pair<int, int>& l1, const pair<int, int>& l2) {
	return l1.first < l2.first;
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> l;
	for (int i = 0; i < N; i++) {
		pair<int, int> p = make_pair(i, i + 1);
		l.push_back(p);
		int num;
		cin >> num;
		int tmp = i - num;
		changePlace(tmp, i, l);
		l[i].first = tmp;
		sort(l.begin(), l.end(), cmp);
	}
	for (int i = 0; i < N; i++)
		cout << l[i].second << " ";
}