#include <iostream>

typedef struct Sensor {
	float price;
	int stock;
};

int main()
{
	Sensor droid[5];
	droid[0].price = 350.34;
	droid[1].price = 230.90;
	droid[2].price = 190.55;
	droid[3].price = 125.30;
	droid[4].price = 180.90;

	int t;
	std::cin >> t;
	for (int j = 0; j < t; j++) {
		float total = 0.0;
		for (int i = 0; i < 5; i++) {
			std::cin >> droid[i].stock;
			total += droid[i].price * droid[i].stock;
		}
		std::printf("$%.2f\n", total);
	}
}