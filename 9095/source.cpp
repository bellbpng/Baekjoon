#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int dp[11] = { 0, 1, 2, 4};
	
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		for (int j = 4; j <= n; j++) {
			dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
		}
		printf("%d\n", dp[n]);
	}
	return 0;
}