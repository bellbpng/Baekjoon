#include <iostream>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int drawing[101][101] = { 0, };
	for (int i = 0; i < N; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		for (int row = x + 1; row <= x + 10; row++)
			for (int col = y + 1; col <= y + 10; col++)
				drawing[row][col] = 1;
	}
	int cnt = 0;
	for (int row = 2; row <= 100; row++)
		for (int col = 2; col <= 100; col++)
			if (drawing[row][col] == 1) cnt++;
	printf("%d\n", cnt);
}