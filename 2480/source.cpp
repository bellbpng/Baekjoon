#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(3);
	int reward = 0;
	for (int i = 0; i < 3; i++) scanf("%d", &v[i]);
	bool chk1 = (v[0] == v[1]) ? true : false;
	bool chk2 = (v[1] == v[2]) ? true : false;
	bool chk3 = (v[0] == v[2]) ? true : false;
	if (chk1 && chk2) reward = 10000 + v[0] * 1000;
	else if (chk1 && (!chk2)) reward = 1000 + v[0] * 100;
	else if (chk2 && (!chk3)) reward = 1000 + v[1] * 100;
	else if (chk3 && (!chk2)) reward = 1000 + v[2] * 100;
	else {
		int max = *max_element(v.begin(), v.end());
		reward = max * 100;
	}
	printf("%d\n", reward);
}


