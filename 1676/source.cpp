#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 0) { printf("0\n"); return 0; }
	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		int tmp = i;
		while (tmp % 5 == 0) {
			cnt++;
			tmp /= 5;
		}
	}
	cout << cnt << endl;
}