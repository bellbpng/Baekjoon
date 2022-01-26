#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int K; string str;
	cin >> K >> str;
	int len = str.length();
	int R = len / K;
	vector<vector<char>> v(R, vector<char>(K));
	int idx = 0;
	for (int row = 0; row < R; row++) {
		if (row % 2 == 0)
			for (int col = 0; col < K; col++)
				v[row][col] = str[idx++];
		else
			for (int col = K - 1; col >= 0; col--)
				v[row][col] = str[idx++];
	}
	string origin = str;
	idx = 0;
	for (int col = 0; col < K; col++)
		for (int row = 0; row < R; row++)
			origin[idx++] = v[row][col];
	cout << origin;
}