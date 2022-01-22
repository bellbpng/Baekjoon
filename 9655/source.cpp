#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int tmp = N % 6;
	if (tmp % 2 == 1) cout << "SK" << endl;
	else cout << "CY" << endl;
}