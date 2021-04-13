#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> v;

	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		v.push_back(input);
	}

	int max = v[0];
	int min = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (max < v[i]) { max = v[i]; }
		else if (min > v[i]) { min = v[i]; }
	}
	printf("%d %d", min, max);
	return 0;
}