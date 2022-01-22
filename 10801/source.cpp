#include <iostream>
using namespace std;

int main()
{
	int a[10] = { 0, };
	int b[10] = { 0, };
	int a_win = 0, b_win = 0;
	for (int i = 0; i < 10; i++) cin >> a[i];
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
		if (a[i] > b[i]) a_win++;
		else if (a[i] < b[i]) b_win++;
	}
	if (a_win > b_win) cout << "A" << endl;
	else if (a_win < b_win) cout << "B" << endl;
	else cout << "D" << endl;
}