#include <iostream>
#include <string>
using namespace std;

void deleteFile(string& str) {
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] == '1')
			str[i] = '0';
		else
			str[i] = '1';
	}
}

int main()
{
	int N;
	cin >> N;
	string origin, deleted;
	cin >> origin >> deleted;
	for (int i = 0; i < N; i++)
		deleteFile(origin);
	if (origin == deleted)
		cout << "Deletion succeeded\n";
	else
		cout << "Deletion failed\n";
}