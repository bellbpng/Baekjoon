#include <iostream>
using namespace std;

int main()
{
	int count[100] = { 0, };
	int numbers[100] = { 0, };
	int sum = 0, avg = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
		sum += numbers[i];
		int j = numbers[i] / 10;
		count[j]++;
	}
	avg = sum / 10;
	int max = 0, freq_num = 0;
	for (int j = 0; j < 100; j++) {
		if (count[j] > max) {
			max = count[j];
			freq_num = j * 10;
		}
	}
	printf("%d\n%d\n", avg, freq_num);
}