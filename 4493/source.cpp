#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int cnt_win[2] = { 0, };
		for (int j = 0; j < n; j++) {
			char player1, player2;
			cin >> player1 >> player2;
			if (player1 == 'R') {
				if (player2 == 'S') cnt_win[0]++;
				else if (player2 == 'P') cnt_win[1]++;
			}
			else if (player1 == 'P') {
				if (player2 == 'R') cnt_win[0]++;
				else if (player2 == 'S') cnt_win[1]++;
			}
			else {
				if (player2 == 'R') cnt_win[1]++;
				else if (player2 == 'P') cnt_win[0]++;
			}
		}
		if (cnt_win[0] > cnt_win[1]) printf("Player 1\n");
		else if (cnt_win[0] < cnt_win[1]) printf("Player 2\n");
		else printf("TIE\n");
	}
}