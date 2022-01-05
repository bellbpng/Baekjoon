#include <iostream>
#include <string>
using namespace std;

int countZero(const string& str) {
	int len = str.length();
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == '0')
			cnt++;
	}
	return cnt;
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N, M;
		scanf("%d %d", &N, &M);
		int cnt = 0;
		for (int j = N; j <= M; j++) {
			string str = to_string(j);
			cnt += countZero(str);
		}
		printf("%d\n", cnt);
	}
}