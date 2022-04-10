#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int paint[101][101] = { 0, };
	int n = 0, m = 0;
	std::cin >> n >> m;
	int no_vision_cnt = 0;

	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		std::cin >> x1 >> y1 >> x2 >> y2;
		
		for (int col = x1; col <= x2; col++) {
			for (int row = y1; row <= y2; row++) {
				paint[row][col]++;
			}
		}
	}
	
	for (int row = 1; row <= 100; row++)
		for (int col = 1; col <= 100; col++)
			if (paint[row][col] > m) no_vision_cnt++;

	std::cout << no_vision_cnt << "\n";
}