#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	while (true) {
		int tmp;
		scanf("%d", &tmp);
		sum += tmp;
		if (getchar() == '\n') break;				
	}
	cout << sum;
}