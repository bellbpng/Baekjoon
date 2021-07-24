#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	int N;
	cin >> N;
	getchar();
	vector<string> v(N);
	for (int i = 0; i < N;i++) {
		getline(cin, v[i]);
	}
	for (int i = 0; i < N; i++) {
		string str = v[i];
		if (islower(str[0]))
			str[0] = toupper(str[0]);
		cout << str;
		printf("\n");
	}
}