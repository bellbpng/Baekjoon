#include <iostream>
using namespace std;

int main()
{
	int apt[15][15] = { 0, };
	int T, n, k;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		for (int l = 1; l <= n; l++) {
			apt[0][l] = l;
		}
		for (int floor = 1; floor <= k; floor++) {
			apt[floor][1] = apt[floor - 1][1];
			for (int room = 2; room <= n; room++) {
				apt[floor][room] = apt[floor][room - 1] + apt[floor - 1][room];
			}
		}
		printf("%d\n", apt[k][n]);
	}
}