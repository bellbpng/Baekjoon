<Solution1> --- time exceed!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> rope(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &rope[i]);
	}
	vector<int> w(N);
	int l = 0;
	for (int i = 0; i < N; i++) {
		int m = rope[i];
		int k = 1;
		for (int j = 0; j < N; j++) {
			if (j == i) continue;
			if (m <= rope[j]) k++;
		}
		w[l++] = m * k;
	}
	int max = *max_element(w.begin(), w.end());
	printf("%d\n", max);
}

<Solution2> --- Success!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main()
{
	int N;
	cin >> N;
	vector<int> rope(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &rope[i]);
	}
	sort(rope.begin(), rope.end(), cmp);

	vector<int> w(N);
	for (int i = 0; i < N; i++) {
		int tmp = rope[i] * (i + 1);
		w[i] = tmp;
	}
	int max = *max_element(w.begin(), w.end());
	printf("%d\n", max);
}
