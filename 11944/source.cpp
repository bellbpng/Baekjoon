#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N; int M;
	cin >> N >> M;
	int n = stoi(N), len = N.length(), cnt = 0;
	bool chk = false;
	for (int i = 0; i < n; i++) {
		cnt += len;
		if (cnt > M) {
			chk = true;
			break;
		}
		cout << N;
	}
	if (chk) {
		int diff = M - (cnt - len);
		if (diff > 0) {
			for (int i = 0; i < diff; i++)
				cout << N[i];
		}
	}
}