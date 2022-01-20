#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<char> games(N, ' ');
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b)
			games[i] = 'a';
		else if (a < b)
			games[i] = 'b';
	}
	int cntA = 0, cntB = 0;
	for (int i = 0; i < games.size(); i++) {
		if (games[i] == 'a') cntA++;
		else if (games[i] == 'b') cntB++;
	}
	cout << cntA << " " << cntB << "\n";
}