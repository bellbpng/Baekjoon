#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int ball[3] = { 1,0,0 };
	for (int i = 0; i < len; i++) {
		if (str[i] == 'A') {
			if (ball[0]) ball[0] = 0, ball[1] = 1;
			else if (ball[1]) ball[0] = 1, ball[1] = 0;
		}
		else if (str[i] == 'B') {
			if (ball[1]) ball[1] = 0, ball[2] = 1;
			else if (ball[2]) ball[1] = 1, ball[2] = 0;
		}
		else if (str[i] == 'C') {
			if (ball[2]) ball[0] = 1, ball[2] = 0;
			else if (ball[0]) ball[0] = 0, ball[2] = 1;
		}
	}
	for(int i=0; i<3; i++)
		if (ball[i] == 1) {
			printf("%d\n", i + 1);
			return 0;
		}
}