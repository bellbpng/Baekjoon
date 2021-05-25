#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Point {
	int xpos;
	int ypos;
};

bool comp(Point p1, Point p2) {
	if (p1.ypos == p2.ypos) return p1.xpos < p2.xpos;
	else return p1.ypos < p2.ypos;
}

int main()
{
	vector<Point> v;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		Point temp;
		scanf("%d %d", &(temp.xpos), &(temp.ypos));
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < v.size(); i++) { 
		printf("%d %d\n", v[i].xpos, v[i].ypos); 
	}
}