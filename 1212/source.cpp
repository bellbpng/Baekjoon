#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string str;
	cin >> str;
	stack<int> s;
	int diff = '1' - 1;
	int len = str.length();
	int cnt = 1;

	for (int i = len-1; i >= 0; i--) {
		int num = str[i] - diff;
		if (num > 0) {
			while (num != 1) {
				int R = num % 2;
				s.push(R);
				num /= 2;
			}
			s.push(1);
		}
		while ((i != 0) && (s.size() < 3 * cnt)) {
			s.push(0);
		}
		cnt++;
	}
	if (s.empty()) { printf("0"); }
	else {
		while (!s.empty()) {
			printf("%d", s.top());
			s.pop();
		}
	}
}