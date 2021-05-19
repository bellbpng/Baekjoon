#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> fibo;
	fibo.push_back(0), fibo.push_back(1);

	int n;
	cin >> n;

	if (n < 2) {
		printf("%d\n", fibo[n]);
	}
	else {
		for (int i = 2; i <= n; i++) {
			fibo.push_back(fibo[i - 2] + fibo[i - 1]);
		}
		printf("%d\n", fibo[n]);
	}

	return 0;
}