#include <iostream>
#include <vector>
using namespace std;

vector<int> lotto(13);
vector<int> com(6);
int k;

void dfs(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			printf("%d ", com[i]);
		}
		printf("\n");
		return;
	}

	for (int i = start; i < k; i++) {
		com[depth] = lotto[i];
		dfs(i + 1, depth + 1);
	}
}

int main()
{
	while (true) {
		cin >> k;
		if (k == 0) break;

		for (int i = 0; i < k; i++) {
			cin >> lotto[i];
		}
		dfs(0, 0);
	}
}