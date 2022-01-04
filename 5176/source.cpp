#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int K;
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		int P, M;
		scanf("%d %d", &P, &M);
		vector<bool> seats(M + 1, true);
		int tmp = 0, cnt = 0;
		for (int j = 0; j < P; j++) {
			scanf("%d", &tmp);
			seats[tmp] ? seats[tmp] = false : cnt++;
		}
		printf("%d\n", cnt);
	}
}