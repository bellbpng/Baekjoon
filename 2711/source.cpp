#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int idx;
		string str;
		cin >> idx >> str;
		str.erase(idx - 1, 1);
		cout << str;
		printf("\n");
	}
}