#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, result = 0;
	int diff = '1' - 1;
	string str;
	cin >> N;
	getchar();
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		result += str[i] - diff;
	}
	printf("%d\n", result);
	return 0;
}