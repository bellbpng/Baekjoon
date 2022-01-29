#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;
		int legs = M * 2;
		int u = legs - N;
		int t = M - u;
		cout << u << " " << t << "\n";
	}
}