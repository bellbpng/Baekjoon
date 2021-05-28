#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 1, diff = '1' - 1;
	int N;
	int temp = 0;
	cin >> N;
	while (num < N) {
		temp = 0;
		string str = to_string(num);
		for (int i = 0; i < str.length(); i++) { temp += str[i] - diff; }
		temp += num;
		if (temp == N) {
			printf("%d\n", num);
			return 0;
		}
		else { num++; }
	}
	printf("0\n");
}