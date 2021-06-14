#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L, C;
vector<char> v; vector<char> result;

void dfs(int start, int depth) {
	if (depth == L) {
		int vowels = 0, consonants = 0;
		for (int i = 0; i < L; i++) {
			char ch = result[i];
			switch (ch) {
			case 'a': case'e': case'i': case'o': case'u':
				vowels++;
				break;
			default:
				consonants++;
				break;
			}
		}
		if (vowels >= 1 && consonants >= 2) {
			for (int i = 0; i < L; i++) { printf("%c", result[i]); }
			printf("\n");
			return;
		}
	}
	for (int i = start; i < C; i++) {
		result[depth] = v[i];
		dfs(i + 1, depth + 1);
	}
}

int main()
{
	cin >> L >> C;
	v.reserve(C);
	result.reserve(L);
	for (int i = 0; i < C; i++) {
		char ch;
		cin >> ch;
		v.push_back(ch);
	}
	for (int i = 0; i < L; i++) { result.push_back(0); }
	sort(v.begin(), v.end());
	dfs(0, 0);
}