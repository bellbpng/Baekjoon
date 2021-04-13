#include <iostream>
#include <string>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
	int N;
	cin >> N;
	getchar();
	stack<int> s;
	string str;

	for (int i = 1; i <= N; i++) {
		getline(cin, str);
		if (str == "pop") {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
			else {		
				cout << -1 << endl;
			}
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			cout << int(s.empty()) << endl;
		}
		else if (str == "top") {
			if (!s.empty()) {
				cout << s.top() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			char* temp;
			int X;
			temp = &str[5];
			X = atoi(temp);
			s.push(X);
		}
	}
	return 0;
}