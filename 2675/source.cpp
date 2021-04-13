#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int R;
		string S;
		getchar();
		cin >> R >> S;

		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}
		cout << endl;
	}
	return 0;
}