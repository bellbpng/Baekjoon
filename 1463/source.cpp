#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int X;
	cin >> X;

	vector<int> v(X + 1);
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	v[3] = 1;

	for (int i = 4; i <= X; i++) {
		if (i % 2 == 0 && i % 3 != 0) {
			(v[i / 2] > v[i - 1]) ? (v[i] = v[i - 1] + 1) : (v[i] = v[i / 2] + 1);
		}
		else if (i % 6 == 0) {
			int temp;
			(v[i / 2] > v[i / 3]) ? (temp = v[i / 3]) : (temp = v[i / 2]);
			(temp > v[i - 1]) ? (v[i] = v[i - 1] + 1) : (v[i] = temp + 1);
		}
		else if (i % 3 == 0) {
			(v[i / 3] > v[i - 1]) ? (v[i] = v[i - 1] + 1) : (v[i] = v[i / 3] + 1);
		}
		else {
			v[i] = v[i - 1] + 1;
		}
	}
	cout << v[X] << endl;

	return 0;
}