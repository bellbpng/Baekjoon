#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> file_name(n + 1);
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		file_name[i] = str;
	}
	int len = file_name[0].length();
	for (int i = 0; i < len; i++) {
		char ch = file_name[0][i];
		bool chk = true;
		for (int j = 1; j < n; j++) {
			if (ch != file_name[j][i]) {
				chk = false;
				break;
			}
		}
		if (chk)
			file_name[n].push_back(ch);
		else
			file_name[n].push_back('?');
	}
	cout << file_name[n] << endl;
}