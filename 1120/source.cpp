#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	int diff = B.length() - A.length();
	vector<int> v;
	while (A.length() != B.length()) {
		A.push_back(' ');
	}

	while (true) {
		int cnt = 0;
		for (int i = 0; i < B.length(); i++) {
			if (A[i] != B[i]) cnt++;
		}
		v.push_back(cnt);
		if (isalpha(A.back())) break;
		A.pop_back();
		A.insert(A.begin(), ' ');
	}
	int result = *min_element(v.begin(), v.end()) - diff;
	printf("%d\n", result);
}