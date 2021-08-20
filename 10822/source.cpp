#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int> v;
	v.push_back(0);
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ',')
			v.push_back(i);
	int sum = stoi(str);
	for (int i = 1; i < v.size(); i++) {
		int idx = v[i] + 1;
		sum += stoi(&str[idx]);
	}
	printf("%d\n", sum);
}

