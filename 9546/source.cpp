#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int k;
		cin >> k;
		vector<int> stops(k + 1, 0);
		for (int l = k; l > 0; l--)
			stops[l - 1] = (stops[l] + 0.5) * 2;
		cout << stops[0] << "\n";
	}
}