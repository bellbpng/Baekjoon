#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<bool> selfNum(10001, true);

void checkSelfNum(int n);

int main()
{
	for (int i = 1; i <= 10000; i++) {
		checkSelfNum(i);
	}

	for (int i = 1; i <= 10000; i++) {
		if (selfNum[i]) {
			printf("%d\n", i);
		}
	}
}

void checkSelfNum(int n) {
	int result = n;
	int diff = '1' - 1;
	while (result <= 10000) {
		string num = to_string(result);
		for (int i = 0; i < num.length(); i++) {
			result += num[i] - diff;
		}
		if (result <= 10000) {
			selfNum[result] = false;
		}
	}
}