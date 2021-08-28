#include <iostream>
using namespace std;

int main()
{
	int arr[101][101] = { 0, };
	for (int i = 0; i < 4; i++) {
		int x_left, y_left, x_right, y_right;
		scanf("%d %d %d %d", &x_left, &y_left, &x_right, &y_right);
		for (int j = x_left + 1; j <= x_right; j++) {
			for (int k = y_left + 1; k <= y_right; k++) {
				if (arr[j][k] == 0)
					arr[j][k] = 1;
			}
		}
	}
	int cnt = 0;
	for (int row = 1; row <= 100; row++)
		for (int col = 1; col <= 100; col++)
			if (arr[row][col] == 1)
				cnt++;
	printf("%d\n", cnt);
}