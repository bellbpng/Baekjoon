#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) scanf("%d", &v[i]);
	int basis = v[0];
	for (int i = 1; i < N; i++) {
		int a = basis;
		int b = v[i];
		int max_com = 0;
		while (true) {
			if (a % b == 0) {
				max_com = b;
				break;
			}
			int tmp = a;
			a = b;
			b = tmp % b;
		}
		int quot = basis / max_com;
		int denom = v[i] / max_com;
		printf("%d/%d\n", quot, denom);
	}
}