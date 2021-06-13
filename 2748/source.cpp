#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1) {
		printf("1\n");
		return 0;
	}
	vector<double> fibo(n + 1);
	fibo[0] = 0, fibo[1] = 1;
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	string result = to_string(fibo[n]);
	char ch = result[0];
	int i = 1;
	while (ch != '.') {
		printf("%c", ch);
		ch = result[i++];
	}
}
