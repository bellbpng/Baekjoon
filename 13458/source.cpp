#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int B, C;
	cin >> B >> C;

	long long cnt = N;
	for (int i = 0; i < N; i++) {
		int num = A[i] - B;
		if (num > 0) {
			cnt += num / C;
			num %= C;
		}
		if (num > 0) {
			cnt++;
		}
	}
	printf("%ld\n", cnt);
}