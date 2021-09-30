#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int base_idx = len / 2 - 1;
	int diff = '1' - 1;
	int left_total = 0, right_total = 0;
	for (int i = 0; i <= base_idx; i++)
		left_total += str[i] - diff;
	for (int j = base_idx + 1; j < len; j++)
		right_total += str[j] - diff;
	left_total == right_total ? printf("LUCKY\n") : printf("READY\n");
	return 0;
}