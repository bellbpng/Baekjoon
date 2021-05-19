#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, cnt = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		string num = to_string(i);
		bool chk = true;
		int d_last = num[1] - num[0];
		for (int j = 1; j < num.length() - 1; j++) {
			char a_front = num[j];
			char a_back = num[j + 1];
			int d_present = a_back - a_front;
			if (d_last != d_present) {
				chk = false;
				break;
			}
		}
		if (chk) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}