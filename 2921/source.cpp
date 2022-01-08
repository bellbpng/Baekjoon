#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> dp(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		int tmp = 0;
		for (int j = i; j <= i * 2; j++)
			tmp += j;
		dp[i] = dp[i - 1] + tmp;
	}
	cout << dp[N] << "\n";
}