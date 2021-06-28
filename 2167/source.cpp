#include <iostream>
#define MAX 301
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int arr[MAX][MAX] = { };
	for (int row = 1; row <= N; row++) {
		for (int col = 1; col <= M; col++) {
			scanf("%d", &arr[row][col]);
		}
	}
	int K;
	cin >> K;
	int i, j, x, y;
	for (int l = 0; l < K; l++) {
		scanf("%d %d %d %d", &i, &j, &x, &y);
		int sum = 0;
		for (int row= i; row <= x; row++) {
			for (int col = j; col <= y; col++) {
				sum += arr[row][col];
			}
		}
		printf("%d\n", sum);
	}
}