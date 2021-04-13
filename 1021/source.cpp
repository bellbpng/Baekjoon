#include <iostream>
#include <deque>
using namespace std;

deque<int> dq;
int cnt = 0;

void rightMove();
void leftMove();

int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	int FirstIndex, AfterIndex;
	for (int i = 0; i < M; i++) {
		cin >> FirstIndex;
		while (1) {
			if (dq.front() == FirstIndex) {
				dq.pop_front();
				break;
			}
			else {
				for (int i = 0; i <= dq.size(); i++) {
					if (FirstIndex == dq[i]) {
						AfterIndex = i + 1;
						break;
					}
				}
			}
			if (dq.size() / 2 + 1 >= AfterIndex)
				leftMove();
			else
				rightMove();
		}
	}
	cout << cnt << endl;
	return 0;
}

void rightMove() {
	cnt++;
	int temp = dq.back();
	dq.pop_back();
	dq.push_front(temp);
}

void leftMove() {
	cnt++;
	int temp = dq.front();
	dq.pop_front();
	dq.push_back(temp);
}
