#include <iostream>

bool findBingo(const int arr[][3]) {
	for (int row = 0; row < 3; row++) {
		int cnt = 0;
		for (int col = 0; col < 3; col++) {
			if (arr[row][col] == 1) cnt++;
		}
		if (cnt == 3) return true;
	}

	for (int col = 0; col < 3; col++) {
		int cnt = 0;
		for (int row = 0; row < 3; row++) {
			if (arr[row][col] == 1) cnt++;
		}
		if (cnt == 3) return true;
	}

	if ((arr[0][0] == 1 && arr[1][1] == 1) && arr[2][2] == 1) return true;
	else if ((arr[2][0] == 1 && arr[1][1] == 1) && arr[0][2] == 1) return true;
	return false;
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int arr_one[3][3] = { 0, }, arr_two[3][3] = { 0, };
	int num = 0;
	std::cin >> num;
	int cnt = 0;
	while (true) {
		int a = 0, b = 0;
		if (num == 1) {
			std::cin >> a >> b;
			arr_one[a-1][b-1] = 1, num = 2;
		}
		else if (num == 2) {
			std::cin >> a >> b;
			arr_two[a-1][b-1] = 1, num = 1;
		}
		if (cnt >= 5) {
			if (findBingo(arr_one)) {
				std::cout << "1\n"; break;
			}
			else if (findBingo(arr_two)) {
				std::cout << "2\n"; break;
			}
		}
		cnt++;
		if (cnt == 9) {
			std::cout << "0"; break;
		}
	}
}