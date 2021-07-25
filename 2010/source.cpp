#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> v(N);
	int total = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
		total += v[i];
	}
	int max = total - (N - 1);
	printf("%d\n", max);
}