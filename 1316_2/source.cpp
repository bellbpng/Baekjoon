#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, group_voca = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string word, tmp_word;
		cin >> word;
		
		int len = word.length();
		for (int j = 1; j < len; j++) {
			if (word[j - 1] != word[j]) {
				tmp_word.push_back(word[j - 1]);
			}
		}
		tmp_word.push_back(word[len - 1]);
		for (int k = 0; k < 26; k++) {
			int count = 0;
			for (int l = 0; l < tmp_word.length(); l++) {
				if (tmp_word[l] == 'a' + k) {
					count++;
				}
			}
			if (count > 1) break;
			if (k == 25) group_voca++;
		}
	}
	printf("%d\n", group_voca);
	return 0;
}