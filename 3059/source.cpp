#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		bool alphabet[26] = { false, };
		string str;
		cin >> str;
		int len = str.length();
		int idx = 0, sum = 0;
		for (int j = 0; j < len; j++) {
			idx = str[j] - 'A';
			if (!alphabet[idx])
				alphabet[idx] = true;
		}
		for (int k = 0; k < 26; k++) {
			if (!alphabet[k])
				sum += k + 'A';
		}
		printf("%d\n", sum);
	}
}