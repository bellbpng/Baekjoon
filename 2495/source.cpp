#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++) {
		string str;
		cin >> str;
		int cnt = 1, max = 1;
		for (int j = 0; j < 7; j++) {
			if (str[j] == str[j + 1]) {
				int k = j + 1;
				while (str[j] == str[k]) {
					if (k++ > 7) break;
					cnt++;
				}
				j = k - 1;
				if (max < cnt)
					max = cnt;
				cnt = 1;
			}
		}
		cout << max << "\n";
	}
}