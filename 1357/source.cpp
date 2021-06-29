#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Rev(string& str, int len) {
	stack<char> s;
	for (int i = 0; i < len; i++) { s.push(str[i]); }

	string tmp;
	tmp.reserve(len);
	while (!s.empty()) {
		tmp.push_back(s.top());
		s.pop();
	}
	int rev = stoi(tmp);
	return rev;
}

int main()
{
	string X, Y;
	cin >> X >> Y;
	int len_x = X.length();
	int len_y = Y.length();
	int rev_x = Rev(X, len_x);
	int rev_y = Rev(Y, len_y);
	int sum = rev_x + rev_y;
	string tmp = to_string(sum);
	int result = Rev(tmp, tmp.length());
	printf("%d\n", result);
}




