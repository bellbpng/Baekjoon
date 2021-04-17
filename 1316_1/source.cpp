#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	getchar();

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		
		vector<char> v;
		bool checker = true;

		for (int j = 0; j < str.length(); j++) {
			v.push_back(str[j]);
			while (str[j] == str[j + 1]) { j++; }
		}
		for (int k = 0; k < v.size() - 1; k++) {
			for (int l = k + 1; l < v.size(); l++) {
				if (v[k] == v[l]) {
					checker = false;
					break;
				}
			}
			if (!checker) { break; }
		}
		if (checker) { cnt++; }
	}
	printf("%d\n", cnt);
	return 0;
}