#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	bool seats[101] = { false, };
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (seats[num] == false)
			seats[num] = true;
		else
			cnt++;
	}
	cout << cnt << "\n";
}