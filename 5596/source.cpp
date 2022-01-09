#include <iostream>
using namespace std;

int main()
{
	int S = 0, T = 0;
	for (int j = 0; j < 4; j++) {
		int tmp;
		cin >> tmp;
		S += tmp;
	}
	for (int j = 0; j < 4; j++) {
		int tmp;
		cin >> tmp;
		T += tmp;
	}
	S >= T ? cout << S : cout << T;
}