#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		bool num[10] = { false, };
		int len = str.length();
		int cnt = 0;
		for (int j = 0; j < len; j++) {
			int idx = str[j] - '0';
			if (num[idx] == false)
				num[idx] = true;
		}
		for (int k = 0; k < 10; k++)
			if (num[k]) cnt++;
		cout << cnt << "\n";
	}
}