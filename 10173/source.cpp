#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	while (true) {
		getline(cin, str);
		if (str == "EOI") break;
		for (int i = 0; i < str.length(); i++) {
			if (isupper(str[i]))
				str[i] = tolower(str[i]);
		}
		if (str.find("nemo", 0) != string::npos)
			cout << "Found\n";
		else
			cout << "Missing\n";
	}
}