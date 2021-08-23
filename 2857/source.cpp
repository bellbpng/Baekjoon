#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool chk = false;
	for (int i = 1; i <= 5; i++) {
		string str;
		cin >> str;
		if (str.find("FBI", 0) != string::npos) {
			chk = true;
			printf("%d ", i);
		}
	}
	if (!chk)
		printf("HE GOT AWAY!\n");
}