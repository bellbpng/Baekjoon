#include <iostream>
using namespace std;

int k;
int lotto[12] = { 0, };
int comb[6];

void dfs(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			printf("%d ", comb[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < k; i++) {
		comb[depth] = lotto[i];
		dfs(i + 1, depth + 1);
	}
}

int main() {
	cin >> k;
	while (k != 0) {
		for (int i = 0; i < k; i++) {
			cin >> lotto[i];
		}
		dfs(0, 0);
		printf("\n");
		cin >> k;
	}
}