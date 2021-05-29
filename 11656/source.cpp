#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string tmp;
	vector<string> v;
	cin >> tmp;

	int len = tmp.length();
	for (int i = 0; i < len; i++) {
		v.push_back(tmp);
		tmp.erase(0, 1);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) { cout << v[i] << "\n"; }
}