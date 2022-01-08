#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int sum = 0, tmp;
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			sum += tmp;
		}
		printf("%d\n", sum);
	}
}