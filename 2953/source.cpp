#include <iostream>
using namespace std;

int main()
{
	int num, max = 0;
	for (int i = 0; i < 5; i++) {
		int score, total = 0;
		for (int j = 0; j < 4; j++) {
			cin >> score;
			total += score;
		}
		if (total > max) {
			max = total;
			num = i + 1;
		}
	}
	printf("%d %d\n", num, max);
}