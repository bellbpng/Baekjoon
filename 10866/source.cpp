#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;
	deque<int> dq;

	cin >> N;
	getchar();

	for (int i = 1; i <= N; i++) {
		getline(cin, str);
		if (str == "pop_front") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (str == "size") {
			cout << dq.size() << endl;
		}
		else if (str == "empty") {
			cout << int(dq.empty()) << endl;
		}
		else if (str == "front") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
			}
		}
		else if (str == "back") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.back() << endl;
			}
		}
		else if (str[5] == 'f') {
			char* temp = &str[11];
			dq.push_front(atoi(temp));
		}
		else {
			char* temp = &str[10];
			dq.push_back(atoi(temp));
		}
	}
	return 0;
}