#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	vector<vector<int>> prefix(N + 1, vector<int>(N + 1, 0));
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int n;
			scanf("%d", &n);
			sum += n;
			prefix[i][j] = sum;
		}
		if (i > 1) prefix[i][0] = prefix[i - 1][N];
	}

	for (int k = 0; k < M; k++) {
		int x1, y1, x2, y2;
		int result = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i = x1; i <= x2; i++) {
			result += prefix[i][y2] - prefix[i][y1- 1];
		}
		printf("%d\n", result);
	}
}

