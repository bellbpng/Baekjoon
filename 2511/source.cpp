#include <iostream>

int main()
{
	int score_a[10] = { 0, }, score_b[10] = { 0, };
	char winner[10] = { 'D', };
	int credit_a = 0, credit_b = 0;
	for (int i = 0; i < 10; i++)
		std::cin >> score_a[i];
	for (int i = 0; i < 10; i++) {
		std::cin >> score_b[i];
		if (score_a[i] > score_b[i]) {
			winner[i] = 'A'; credit_a += 3;
		}
		else if (score_a[i] < score_b[i]) {
			winner[i] = 'B'; credit_b += 3;
		}
		else {
			credit_a++; credit_b++;
		}
	}
	char total_winner = 'D';
	if (credit_a > credit_b) total_winner = 'A';
	else if (credit_a < credit_b) total_winner = 'B';
	else {
		int idx_a = 0, idx_b = 0;
		for (int i = 0; i < 10; i++) {
			if (winner[i] == 'A') idx_a = i;
			else if (winner[i] == 'B') idx_b = i;
		}
		if (idx_a > idx_b) total_winner = 'A';
		else if (idx_a < idx_b) total_winner = 'B';
	}
	std::cout << credit_a << " " << credit_b << "\n" << total_winner << "\n";
}