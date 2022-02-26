#include <iostream>

int main()
{
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	int arr[101] = { 0, };
	for (int i = 0; i < 3; i++) {
		int arrival = 0, leave = 0;
		std::cin >> arrival >> leave;
		for (int j = arrival; j < leave; j++) arr[j]++;
	}
	int price = 0;
	for (int i = 1; i <= 100; i++) {
		if (arr[i] == 1) price += a;
		else if (arr[i] == 2) price += b*2;
		else if (arr[i] == 3) price += c*3;
	}
	std::cout << price << "\n";
}