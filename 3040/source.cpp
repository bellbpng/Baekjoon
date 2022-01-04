#include <iostream>
using namespace std;

int main()
{
	int num[9] = { 0, };
	int total = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", num + i);
		total += num[i];
	}
	int diff = total - 100;
	int idx1 = 0, idx2 = 0;
	bool chk = false;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (num[i] + num[j] == diff) {
				idx1 = i, idx2 = j;
				chk = true; break;
			}
		}
		if (chk) break;
	}
	for (int i = 0; i < 9; i++) {
		if (i == idx1 || i == idx2)
			continue;
		printf("%d\n", num[i]);
	}
}