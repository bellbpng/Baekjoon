#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct Point {
	int xpos;
	int ypos;
};

bool cmp(Point p1, Point p2) {
	if (p1.xpos == p2.xpos) {
		return p1.ypos < p2.ypos;
	}
	else {
		return p1.xpos < p2.xpos;
	}
}

int main()
{
	int N;
	cin >> N;
	vector<Point> p(N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &p[i].xpos, &p[i].ypos);
	}
	sort(p.begin(), p.end(), cmp);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", p[i].xpos, p[i].ypos);
	}
}