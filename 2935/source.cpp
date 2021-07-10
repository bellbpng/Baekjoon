#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	char opt;
	cin >> A >> opt >> B;
	int len_A = A.length();
	int len_B = B.length();
	if (opt == '*') {
		int cnt = 0;
		for (int i = 1; i < len_A; i++) {
			if (A[i] == '0') cnt++;
		}
		for (int i = 1; i < len_B; i++) {
			if (B[i] == '0') cnt++;
		}
		printf("1");
		for (int i = 0; i < cnt; i++) printf("0");
	}
	else {
		if (len_A == len_B) {
			A[0] = '2';
			cout << A;
		}
		else {
			string long_str = len_A > len_B ? A : B;
			int len = len_A > len_B ? len_B : len_A;
			long_str[long_str.length() - len] = '1';
			cout << long_str;
		}
	}
}