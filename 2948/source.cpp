#include <iostream>
#include <string>
#include <vector>
using namespace std;

void init(vector<string>& v) {
	v[0] = "Monday";
	v[1] = "Tuesday";
	v[2] = "Wednesday";
	v[3] = "Thursday";
	v[4] = "Friday";
	v[5] = "Saturday";
	v[6] = "Sunday";
}

int main()
{
	int D, M;
	cin >> D >> M;
	int monthDay[12] = { 3,6,6,2,4,0,2,5,1,3,6,1 }; // the first day of each month
	vector<string> days(7);
	init(days);
	int idx = monthDay[M - 1];
	int diff = D - 1;
	int tmp = diff % 7;
	idx += tmp;
	if (idx > 6)
		idx -= 7;
	cout << days[idx] << "\n";
}