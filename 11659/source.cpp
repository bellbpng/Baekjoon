#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> v(N+1);
	vector<int> prefix(N + 1);
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &v[i]);
		sum += v[i];
		prefix[i] = sum;
	}
	for (int k = 0; k < M; k++) {
		int i, j;
		scanf("%d %d", &i, &j);
		int result = prefix[j] - prefix[i - 1];
		printf("%d\n", result);
	}
	
}