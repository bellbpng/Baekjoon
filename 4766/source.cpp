#include <iostream>

int main()
{
	float before = 0.0;
	std::scanf("%f", &before);
	while (true) {
		float now = 0.0;
		std::scanf("%f", &now);
		if (now == float(999)) break;
		printf("%.2f\n", now - before);
		before = now;
	}
}