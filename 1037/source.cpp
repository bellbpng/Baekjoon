#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());
	printf("%d\n", max * min);
}