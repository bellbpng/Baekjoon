#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> data(5001, -1);
	data[0] = 0;
	data[3] = 1;
	data[5] = 1;
	data[6] = 2;
	data[8] = 2;
	data[9] = 3;

	for (int i = 10; i <= N; i++) {
		int num = i % 10;
		switch (num) {
		case 0:
			data[i] = i / 5;
			break;
		case 1:
			data[i] = data[i - 6] + data[6];
			break;
		case 2:
			data[i] = 12 / 3 + data[i - 12];
			break;
		case 3:
			data[i] = data[i - 3] + data[3];
			break;
		case 4:
			data[i] = data[i - 9] + data[9];
			break;
		case 5:
			data[i] = i / 5;
			break;
		case 6:
			data[i] = data[i - 6] + data[6];
			break;
		case 7:
			data[i] = 12 / 3 + data[i - 12];
			break;
		case 8:
			data[i] = data[i - 3] + data[3];
			break;
		case 9:
			data[i] = data[i - 9] + data[9];
			break;
			}
		}
	cout << data[N] << endl;
	return 0;
}