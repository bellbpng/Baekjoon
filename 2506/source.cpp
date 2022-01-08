#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N);
	int score = 0, result = 0;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		if (v[i]) {
			score++;
			result += score;
		}
		else
			score = 0;
	}
	printf("%d\n", result);
}