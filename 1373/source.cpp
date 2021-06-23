#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	string binary;
	cin >> binary;

	int len = binary.length();
	vector<char> v;
	stack<int> oct;
	for (int i = len - 1; i >= 0; i--) {
		v.push_back(binary[i]);
		if (v.size() == 3) {
			int tmp = 0;
			for (int k = 0; k < 3; k++) {
				if (v[k] == '1') { tmp += pow(2, k); }
			}
			v.clear();
			oct.push(tmp);
		}
	}
	if (v.size() != 0) {
		int tmp = 0;
		for (int i = v.size() - 1; i >= 0; i--) {
			if (v[i] == '1') { tmp += pow(2, i); }
		}
		oct.push(tmp);
	}

	while (!oct.empty()) {
		printf("%d", oct.top());
		oct.pop();
	}
}