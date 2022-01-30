#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "P=NP") cout << "skipped" << "\n";
		else {
			int len = str.length();
			int a = stoi(str);
			char* ptr = NULL;
			for (int j = 1; j < len; j++)
				if (str[j] == '+') ptr = &str[j];
			int b = stoi(ptr);
			cout << a + b << "\n";
		}
	}
}