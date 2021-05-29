#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, result = 0;
	for (int i = 0; i < 5; i++) { 
		scanf("%d", &num);
		result += pow(num, 2);
	}
	printf("%d\n", result % 10);
}