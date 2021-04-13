#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string str;
		stack<char> s;
		bool chk = true;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			else {
				if (s.empty()) {
					cout << "NO" << endl;
					chk = false;
					break;
				}
				else {
					s.pop();
				}
			}
		}
		if (chk && s.empty()) {
			cout << "YES" << endl;
		}
		else if (chk && !s.empty()) {
			cout << "NO" << endl;
		}
	}
	return 0;
}