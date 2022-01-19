#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;
	while (true) {
		int a, b;
		string str;
		cin >> a >> str >> b;
		if (str == "E") break;
		cnt++;
		bool chk;
		if (str == ">")
			chk = a > b ? true : false;
		else if(str == ">=")
			chk = a >= b ? true : false;
		else if(str == "<")
			chk = a < b ? true : false;
		else if(str == "<=")
			chk = a <= b ? true : false;
		else if(str == "==")
			chk = a == b ? true : false;
		else
			chk = a != b ? true : false;

		string result = chk ? "true" : "false";
		cout << "Case " << cnt << ": " << result << "\n";
	}
}