#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int V, E;
		scanf("%d %d", &V, &E);
		printf("%d\n", 2 - V + E);
	}
}