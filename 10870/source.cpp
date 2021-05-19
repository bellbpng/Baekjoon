#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> fibo;
	fibo.push_back(0);
	fibo.push_back(1);
	int n, temp;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		temp = fibo[i - 1] + fibo[i - 2];
		fibo.push_back(temp);
	}
	printf("%d\n", fibo[n]);
}