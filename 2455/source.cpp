#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(4, 0);
	int tmp = 0;
	for (int i = 0; i < 4; i++) {
		int out, in;
		cin >> out >> in;
		v[i] = tmp + in - out;
		tmp = v[i];
	}
	
	cout << *max_element(v.begin(), v.end());
}