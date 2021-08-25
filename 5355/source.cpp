<Solution 1>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	getchar();
	for (int i = 0; i < T; i++) {
		string str;
		getline(cin, str);
		bool chk = false;
		int idx = 0;
		while (str[idx] != ' ') {
			if (str[idx] == '.') chk = true;
			idx++;
		}
		float num = 0.0;
		if (chk) num = stof(str);
		else num = float(stoi(str));
		idx++;
		for (;idx < str.length(); idx++) {
			char ch = str[idx];
			if (ch == '@') num *= 3;
			else if (ch == '%') num += 5;
			else if (ch == '#') num -= 7;
		}
		printf("%.2f\n", num);
	}
}

<Solution - best thing in my opinion>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	getchar();
	for (int i = 0; i < T; i++) {
		string str;
		getline(cin, str);
		int idx = 0;
		float num = stof(str);
		while (str[idx++] != ' ') { }
		for (;idx < str.length(); idx++) {
			char ch = str[idx];
			if (ch == '@') num *= 3;
			else if (ch == '%') num += 5;
			else if (ch == '#') num -= 7;
		}
		printf("%.2f\n", num);
	}
}