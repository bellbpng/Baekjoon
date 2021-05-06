#include <iostream>
using namespace std;

typedef struct Point {
	int xpos;
	int ypos;
};

int main()
{
	Point p1, p2, p3;
	cin >> p1.xpos >> p1.ypos;
	cin >> p2.xpos >> p2.ypos;
	cin >> p3.xpos >> p3.ypos;

	Point p4;
	if (p1.xpos == p2.xpos) p4.xpos = p3.xpos;
	else if (p1.xpos == p3.xpos) p4.xpos = p2.xpos;
	else p4.xpos = p1.xpos;

	if (p1.ypos == p2.ypos) p4.ypos = p3.ypos;
	else if (p1.ypos == p3.ypos) p4.ypos = p2.ypos;
	else p4.ypos = p1.ypos;

	printf("%d %d\n", p4.xpos, p4.ypos);
}