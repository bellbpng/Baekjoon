#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		int firstVal = 0;
		for (int j = 0; j < 3; j++)
			firstVal += pow(26, 2-j) * (str[j] - 'A');
		char* ptr = &str[4];
		int secondVal = atoi(ptr);
		if(abs(firstVal - secondVal) <= 100)
			cout << "nice\n";
		else
			cout << "not nice\n";
	}
}