#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> v(N + 1, 1);
	int cnt = 0;
	int idx = 2;
	while (true) {
		for (int j = idx; j <= N; j += idx) {
			if (v[j] == 0) continue;
			v[j] = 0;
			cnt++;
			if (cnt == K) {
				printf("%d\n", j);
				return 0;
			}
		}
		idx++;
	}
}