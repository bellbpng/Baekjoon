#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int E = 1, S = 1, M = 1, year = 1;
	while (true) {
		if ((a == E && b == S) && c == M) 
			break;
		if (E == 15) 
			E = 1;
		else 
			E++;
		if (S == 28) 
			S = 1;
		else 
			S++;
		if (M == 19)
			M = 1;
		else 
			M++;
		year++;
	}
	printf("%d\n", year);
}