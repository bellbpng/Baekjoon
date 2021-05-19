#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	string longNum, shortNum;
	if (A.length() >= B.length()) {
		longNum = A;
		shortNum = B;
	}
	else {
		longNum = B;
		shortNum = A;
	}

	int carry = 0;
	int temp, k = longNum.length() - 1;
	int num1, num2, num;
	int diff = '1' - 1;
	stack<char> result;
	char tmp;

	for (int i = shortNum.length() - 1; i >= 0; i--) {
		num1 = longNum[k--] - diff;
		num2 = shortNum[i] - diff;
		temp = num1 + num2 + carry;
		if (temp >= 10) {
			tmp = temp % 10 + diff;
			result.push(tmp);
			carry = 1;
		}
		else {
			tmp = temp + diff;
			result.push(tmp);
			carry = 0;
		}
	}

	for (;k >= 0;k--) {
		num = longNum[k] - diff;
		temp = num + carry;
		if (temp >= 10) {
			tmp = temp % 10 + diff;
			result.push(tmp);
			carry = 1;
		}
		else {
			tmp = temp + diff;
			result.push(temp + diff);
			carry = 0;
		}
	}

	if (carry == 1) result.push('1');

	while (!result.empty()) {
		cout << result.top();
		result.pop();
	}

	return 0;
}