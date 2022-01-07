#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		total += tmp;
	}
	cout << total << "\n";
}