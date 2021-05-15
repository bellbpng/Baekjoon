#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (!cin.eof()) {
		getline(cin, str);
		if (str.empty()) {
			cout << endl;
		}
		else {
			cout << str << endl;
		}
	}
}