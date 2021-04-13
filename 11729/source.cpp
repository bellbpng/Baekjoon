#include <cstdio>
#include <vector>
using namespace std;

vector<pair<char, char>> v;

void hanoiTower(int n, char from, char temp, char to);

int main()
{
	int N;
	scanf("%d", &N);
	hanoiTower(N, '1', '2', '3');

	printf("%ld\n", v.size());
	for (int i = 0; i < v.size(); i++)
		printf("%c %c\n", v[i].first, v[i].second);

	return 0;
}

void hanoiTower(int n, char from, char temp, char to) {
	if (n == 1) {
		v.push_back({ from, to });
	}
	else {
		hanoiTower(n - 1, from, to, temp);
		v.push_back({ from, to });
		hanoiTower(n - 1, temp, from, to);
	}
}