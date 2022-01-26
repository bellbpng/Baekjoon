#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct participant {
	int country;
	int stdNum;
	int score;
};

bool cmp(const participant& p1, const participant& p2) {
	return p1.score > p2.score;
}

int main()
{
	int N;
	cin >> N;
	vector<participant> p(N);
	for (int i = 0; i < p.size(); i++)
		scanf("%d %d %d", &p[i].country, &p[i].stdNum, &p[i].score);
	sort(p.begin(), p.end(), cmp);
	int gold[2] = { p[0].country, p[0].stdNum };
	int silver[2] = { p[1].country, p[1].stdNum };
	int bronze[2] = { 0, };
	if (p[0].country == p[1].country) {
		int idx = 2;
		while (true) {
			if (p[idx].country != p[1].country) {
				bronze[0] = p[idx].country;
				bronze[1] = p[idx].stdNum;
				break;
			}
			else idx++;
		}
	}
	else {
		bronze[0] = p[2].country;
		bronze[1] = p[2].stdNum;
	}
	printf("%d %d\n%d %d\n%d %d\n", gold[0], gold[1], silver[0], silver[1], bronze[0], bronze[1]);
}