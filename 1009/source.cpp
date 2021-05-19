#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		int unit = a % 10;
		int period = 1;
		int temp = unit;
		vector<int> v;

		while (true) {
			v.push_back(temp);
			temp = (temp * unit) % 10;
			if (temp == unit) {
				break;
			}
			else {
				period++;
			}
		}

		int R = b % period;
		if (R == 0) {
			if (v[period - 1] == 0) {
				printf("10\n");
			}
			else {
				printf("%d\n", v[period - 1]);
			}		
		}
		else {
			if (v[R - 1] == 0) {
				printf("10\n");
			}
			else {
				printf("%d\n", v[R - 1]);
			}
		}
	}
	return 0;
}