#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const int& a, const int& b) {
	return a > b;
}

int main()
{
	int w[10] = { 0, }, k[10] = { 0, };
	for (int i = 0; i < 10;i++) {
		scanf("%d", w + i);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", k + i);
	}
	sort(w, w + 10, cmp);
	sort(k, k + 10, cmp);
	int wScore = 0, kScore = 0;
	for (int i = 0; i < 3; i++) {
		wScore += w[i];
		kScore += k[i];
	}
	printf("%d\n%d\n", wScore, kScore);
}