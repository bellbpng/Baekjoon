#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	// 소인수분해하기
	int temp = N;
	int idx = 2;

	while(temp!=1) {
		if (temp % idx == 0) {
			printf("%d\n", idx);
			temp /= idx;
		}
		else idx++;
	}
}