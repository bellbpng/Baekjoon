#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	vector<int> v;
	v.push_back(1);
	for (int i = 2; i <= N; i++) {
		if (N % i == 0) 
			v.push_back(i);
	}
	if (v.size() >= K)
		printf("%d\n", v[K - 1]);
	else
		printf("0\n");
}