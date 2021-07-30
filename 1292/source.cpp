#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	vector<int> v(1000);
	int idx = 0, l = 1;
	while (true) {
		if (idx == 1000) break;
		for (int j = 1; j <= l; j++) {
			v[idx++] = l;
			if (idx == 1000) break;
		}
		l++;
	}
	int sum = 0;
	for (int i = A - 1; i < B; i++)
		sum += v[i];
	printf("%d\n", sum);
}