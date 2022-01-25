#include <iostream>
using namespace std;

int bingo = 0;

void findRight(int arr[][5]) {
	for (int row = 0; row < 5; row++) {
		int cnt = 0;
		for (int col = 0; col < 5; col++)
			if (arr[row][col] == 0) cnt++;
		if (cnt == 5) bingo++;
	}
}

void findDown(int arr[][5]) {
	for (int col = 0; col < 5; col++) {
		int cnt = 0;
		for (int row = 0; row < 5; row++)
			if (arr[row][col] == 0) cnt++;
		if (cnt == 5) bingo++;
	}
}

void findCross(int arr[][5]) {
	int cnt = 0;
	for (int n = 0; n < 5; n++)
		if (arr[n][n] == 0) cnt++;
	if (cnt == 5) bingo++;
	cnt = 0;
	for (int row = 0; row < 5; row++)
		if (arr[row][4 - row] == 0) cnt++;
	if (cnt == 5) bingo++;
}

void searchNum(int arr[][5], int tmp) {
	bool chk = false;
	for (int row = 0; row < 5; row++) {
		for(int col=0; col<5; col++)
			if (arr[row][col] == tmp) {
				arr[row][col] = 0;
				chk = true; break;
			}
		if (chk) break;
	}
}

int main()
{
	int board[5][5] = { 0, };
	for (int row = 0; row < 5; row++)
		for (int col = 0; col < 5; col++)
			cin >> board[row][col];
	int cnt = 0;
	while (true) {
		cnt++;
		int tmp;
		cin >> tmp;
		searchNum(board, tmp);
		if (cnt >= 12) {
			findRight(board);
			findDown(board);
			findCross(board);
		}
		if (bingo >= 3) break;
		else bingo = 0;
	}
	cout << cnt << endl;
}