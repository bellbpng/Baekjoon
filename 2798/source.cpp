#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> num(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	int diff = M;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int temp = num[i] + num[j] + num[k];
				if (temp > M) continue;
				if (diff >= M - temp) { diff = M - temp; }
			}
		}
	}
	printf("%d\n", M - diff);
}