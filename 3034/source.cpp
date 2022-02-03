#include <iostream>
#include <cmath>

int main()
{
	int N, W, H;
	std::cin >> N >> W >> H;
	float max= sqrt(W * W + H * H);
	for (int i = 0; i < N; i++) {
		int length;
		std::cin >> length;
		if (max < length) std::cout << "NE\n";
		else std::cout << "DA\n";
	}
}