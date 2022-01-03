#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const int& a, const int& b) {
	return a > b;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int k = 0; k < t; k++) {
		int scores[5] = { 0, };
		for (int i = 0; i < 5; i++)
			scanf("%d", &scores[i]);
		sort(scores, scores + 5, cmp);
		if (scores[1] - scores[3] >= 4)
			cout << "KIN" << endl;
		else
			cout << scores[1] + scores[2] + scores[3] << endl;
	}
}