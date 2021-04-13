#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(const string str1, const string str2);

int main()
{
	int N;
	cin >> N;
	getchar();

	vector<string> v;
	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		v.push_back(str);
	}

	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < v.size(); i++) {
		if (i>0 && v[i] == v[i - 1]) { continue; }
		cout << v[i] << endl;
	}
	return 0;
}

bool comp(const string str1, const string str2) {
	if(str1.length() != str2.length()) {
		return str1.length() < str2.length();
	}

	else {
		return str1 < str2;
	}
}