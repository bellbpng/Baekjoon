#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;
	queue<int> q;

	cin >> N;
	getchar(); // 버퍼 비우기

	for (int i = 0; i < N; i++) {
		getline(cin, str);
		if (str == "pop") {
			if (q.empty()) 
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			cout << int(q.empty()) << endl;
		}
		else if (str == "front") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
			
		}
		else if (str == "back") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
		else {
			char temp[10], j=0;
			for (int i = 0; i < str.length(); i++) {
				if (str[i] >= 48 && str[i] <= 57) {
					temp[j++] = str[i];
				}
			}
			temp[j] = NULL;
			q.push(atoi(temp));
		}
	}
	return 0;
}