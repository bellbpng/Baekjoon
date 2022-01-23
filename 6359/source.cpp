#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		vector<bool> room(n + 1, false);
		for (int k = 2; k <= n; k++) {
			for (int l = k; l <= n; l += k) {
				if (room[l] == false) room[l] = true;
				else room[l] = false;
			}
		}
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (room[j] == false) cnt++;
		cout << cnt << "\n";
	}
}