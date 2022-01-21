#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int val = 1;
	for (int i = 0; i < 4; i++)
		val *= (n - i);
	int result = val / 24;
	cout << result << endl;
}