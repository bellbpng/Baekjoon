#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int first, second;
		cin >> first >> second;
		cout << "Case " << i + 1 << ": " << first + second << "\n";
	}
}