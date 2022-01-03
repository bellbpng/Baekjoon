#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, v;
	scanf("%d", &N);
	vector<int> data(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &data[i]);
	}
	scanf("%d", &v);
	int cnt = 0;
	for (int i = 0; i < data.size(); i++) {
		if (data[i] == v) 
			cnt++;
	}
	printf("%d\n", cnt);
}