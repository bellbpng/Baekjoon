#include <iostream>
using namespace std;

int main()
{
	int T;
	int A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		printf("Case #%d: %d\n", i + 1, A + B);
	}
}