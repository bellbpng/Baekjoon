#include <iostream>
#include <cstring>
using namespace std;

int gcd(int& big, int& small);

int main()
{
	char str[20];
	scanf("%s", str);
	char* ptr = strtok(str, ":");
	int n = atoi(ptr);
	ptr = strtok(NULL, ":");
	int m = atoi(ptr);
	int big = n > m ? n : m;
	int small = n < m ? n : m;
	int GCD = gcd(big, small);
	printf("%d:%d\n", n / GCD, m / GCD);
}

int gcd(int& big, int& small) {
	int r = big % small;
	while (r != 0) {
		big = small, small = r;
		r = big % small;
	}
	return small;
}