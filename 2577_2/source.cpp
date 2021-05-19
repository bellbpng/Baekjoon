#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int prodcut = A * B * C;
	string numberToString = to_string(prodcut);

	for (char i = '0'; i <= '9'; i++) {
		int cnt = 0;
		for (int j = 0; j < numberToString.length(); j++) {
			if (i == numberToString[j]) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}