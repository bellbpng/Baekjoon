#include <iostream>
using namespace std;

int main()
{
	int passengers = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		int in = 0, out = 0;
		scanf("%d %d", &out, &in);
		passengers = passengers + in - out;
		if (passengers > max) 
			max = passengers;
	}
	printf("%d\n", max);
}