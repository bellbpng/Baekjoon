#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(const pair<string, int>& p1, const pair<string, int>& p2) {
	return p1.second > p2.second;
}

int main()
{
	int n;
	scanf("%d", &n);
	vector<pair<string, int>> student(n);
	for (int i = 0; i < n; i++) {
		int tmp[3] = { 0, };
		cin >> student[i].first >> tmp[0] >> tmp[1] >> tmp[2];
		student[i].second = tmp[2] * 1000 + tmp[1] * 50 + tmp[0];
	}
	sort(student.begin(), student.end(), cmp);
	cout << student[0].first << "\n" << student[n - 1].first << endl;
}