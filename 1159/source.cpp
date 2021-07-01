#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> player(N);
	for (int i = 0; i < N; i++) {
		cin >> player[i];
	}

	int arr[26] = { 0, };
	for (int i = 0; i < N; i++) {
		int idx = player[i].front() - 'a';
		arr[idx]++;
	}

	vector<char> selection;
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			char ch = i + 'a';
			selection.push_back(ch);
		}
	}
	if (selection.empty()) { printf("PREDAJA\n"); }
	else {
		sort(selection.begin(), selection.end());
		for (int i = 0; i < selection.size(); i++) {
			printf("%c", selection[i]);
		}
	}
}