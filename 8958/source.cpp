#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;
	getchar();

	for (int t = 0; t < T; t++) {
		string str;
		stack<char> s;
		getline(cin, str);

		int total = 0;
		for (int i = 0; i <= str.length(); i++) {
			if (str[i] == 'O')
				s.push(str[i]);
			else {
				int score = 1;
				while (!s.empty()) {
					total += score;
					score++;
					s.pop();
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}