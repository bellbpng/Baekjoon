#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		vector<pair<int, float>> v(N);
		float sum = 0.0;
		int credit = 0;
		for (int j = 0; j < N; j++) {
			cin >> v[j].first >> v[j].second;
			credit += v[j].first;
			sum += v[j].first * v[j].second;
		}
		float gpa = sum / credit;
		cout << credit << " ";
		cout << fixed;
		cout.precision(1);
		cout << gpa << endl;
	}
}