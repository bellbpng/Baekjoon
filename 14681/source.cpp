#include <iostream>
using namespace std;

typedef struct point {
	int x;
	int y;
};

int main()
{
	point p;
	cin >> p.x >> p.y;

	if (p.x > 0 && p.y > 0) printf("1\n");
	else if (p.x < 0 && p.y>0) printf("2\n");
	else if (p.x < 0 && p.y < 0) printf("3\n");
	else printf("4\n");

	return 0;
}