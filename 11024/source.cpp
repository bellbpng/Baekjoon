#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int total = 0;
		while (true) {
			int tmp;
			cin >> tmp;
			total += tmp;
			if (getchar() == '\n') break;		
		}
		cout << total << '\n';
	}
}