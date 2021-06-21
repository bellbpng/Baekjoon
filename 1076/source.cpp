#include <iostream>
#include <string>
using namespace std;

int main()
{
	int idx[3];
	for (int i = 0; i < 3; i++) {
		string str;
		cin >> str;
		if (str == "black") idx[i] = 0;
		else if (str == "brown") idx[i] = 1;
		else if (str == "red") idx[i] = 2;
		else if (str == "orange") idx[i] = 3;
		else if (str == "yellow") idx[i] = 4;
		else if (str == "green") idx[i] = 5;
		else if (str == "blue") idx[i] = 6;
		else if (str == "violet") idx[i] = 7;
		else if (str == "grey") idx[i] = 8;
		else if (str == "white") idx[i] = 9;
	}
	int val = idx[0] * 10 + idx[1];
	if (val == 0) { 
		printf("0\n"); 
		return 0;
	}
	string mul;
	mul.reserve(idx[2]);
	for (int i = 0; i < idx[2]; i++) {
		mul.push_back('0');
	}
	cout << val << mul << endl;
}