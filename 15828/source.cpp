#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, temp;
	queue<int> q;
	
	cin >> N;

	while (1) {
		cin >> temp;
		if (temp == -1) {
			if (q.empty()) {
				cout << "empty";
				return 0;
			}
			else {
				while (!q.empty()) {
					cout << q.front() << ' ';
					q.pop();
				}
				return 0;
			}
		}
		else if (temp == 0) {
			q.pop();
		}
		else if (q.size() == N) {
			continue;
		}
		else {
			q.push(temp);
		}
	}
}