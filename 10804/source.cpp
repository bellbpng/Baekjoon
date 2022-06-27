#include <iostream>
#include <vector>

std::vector<int> v(20);

void swapReverse(const int& start, const int& end) {
	int mid = (start + end) / 2;
	int j = 0;
	for (int i = start; i <= mid; i++) {
		int tmp = v[i];
		v[i] = v[end - j];
		v[end - j] = tmp;
		j++;
	}
}

int main()
{
	for (int i = 0; i < 20; i++)
		v[i] = i + 1;
	for (int i = 0; i < 10; i++) {
		int start, end;
		std::cin >> start >> end;
		swapReverse(start - 1, end - 1);
	}
	for (auto ele : v)
		std::cout << ele << " ";
}