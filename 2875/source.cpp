#include <iostream>
using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	int cnt = 0;
	while (true) {
		if (K > N + M) {
			cnt--;
			break;
		}
		else if (K == N + M) break;
		else if (N == 0 || M == 0) break;
		else if (N < 0 || M < 0) {
			cnt--;
			break;
		}
		N -= 2, M--;
		cnt++;
	}
	printf("%d\n", cnt);
}