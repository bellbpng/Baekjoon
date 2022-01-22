#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N <= 6) {
		if (N % 2 == 0) {
			cout << "CY" << endl; return 0;
		}
		else {
			cout << "SK" << endl; return 0;
		}
	}
	int tmp = N % 6;
	if (tmp % 2 == 1) cout << "SK" << endl;
	else cout << "CY" << endl;
}