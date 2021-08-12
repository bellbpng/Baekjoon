#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int cnt_j = 0, cnt_i = 0;
	int idx = 0;
	while (str.find("JOI", idx) != string::npos) {
		cnt_j++;
		idx = str.find("JOI", idx) + 1;
	}
	idx = 0;
	while(str.find("IOI", idx) != string::npos) {
		cnt_i++;
		idx = str.find("IOI", idx) + 1;
	}
	printf("%d\n%d\n", cnt_j, cnt_i);
}