#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool chk = true;
	for (int i = 0; i < 2 * n;i++) {
		for (int j = 0; j < n; j++) {
			if (chk) {
				printf("*");
				chk = false;
			}
			else {
				printf(" ");
				chk = true;
			}
		}
		printf("\n");
		if (n % 2 == 0) {
			if (chk) chk = false;
			else chk = true;
		}
	}
}