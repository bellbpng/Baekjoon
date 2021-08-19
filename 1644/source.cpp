#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N + 1, 1);
	for (int i = 2; i <= sqrt(N); i++) {
		if (v[i] == 0) continue;
		for (int j = i + i; j <= N; j += i) 
			v[j] = 0;
	}
	vector<int> prime;
	for (int i = 2; i <= N; i++) 
		if (v[i] == 1) prime.push_back(i);

	int cnt = 0, sum = 0;
	int len = prime.size();
	for (int i = -1; i < len-1; i++) {
		sum = 0;
		for (int j = i + 1; j < len; j++) {
			sum += prime[j];
			if (sum == N) {
				cnt++;
				break;
			}
			else if (sum > N) break;
		}
	}
	printf("%d\n", cnt);
}