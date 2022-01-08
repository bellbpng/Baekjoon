#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int c, v;
		cin >> c >> v;
		int give = c / v;
		int remain = c % v;
		cout << "You get " << give << " piece(s) and your dad gets " << remain << " piece(s).\n";
	}
}