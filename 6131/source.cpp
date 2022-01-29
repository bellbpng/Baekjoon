#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int cnt = 0;
	for (int B = 1; B < 500; B++) {
		int A = B + 1;
		while (true) {
			if (A * A - B * B > N) break;
			if (A * A - B * B == N) cnt++;
			A++;
		}
	}
	cout << cnt << endl;
}