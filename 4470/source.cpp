#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		cout << i + 1 << ". " << str << "\n";
	}
}