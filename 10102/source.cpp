#include <iostream>
#include <string>
using namespace std;

int main()
{
	int V;
	cin >> V;
	string str;
	cin >> str;
	int cntA = 0, cntB = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A')
			cntA++;
		else
			cntB++;
	}
	if (cntA == cntB)
		printf("Tie\n");
	else if (cntA > cntB)
		printf("A\n");
	else
		printf("B\n");
}

