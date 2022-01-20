#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> &v) {
	int max = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}
	return max;
}

int main() 
{
	int N;
	cin >> N;
	vector<int> prize(N, 0);
	for (int j = 0; j < N; j++) {
		vector<int> dice_cnt(6, 0);
		for (int i = 0; i < 4; i++) {
			int tmp;
			cin >> tmp;
			dice_cnt[tmp - 1] += 1;
		}
		vector<int> v;
		for (int i = 0; i < 6; i++) {
			if (dice_cnt[i] == 4)
				prize[j] = 50000 + (i + 1) * 5000;
			else if (dice_cnt[i] == 3)
				prize[j] = 10000 + (i + 1) * 1000;
			else if (dice_cnt[i] == 2)
				v.push_back(i + 1);
		}
		if (v.size() == 2)
			prize[j] = 2000 + v[0] * 500 + v[1] * 500;
		else if (v.size() == 1)
			prize[j] = 1000 + v[0] * 100;
		else if (prize[j] == 0) {
			int val = 1;
			for (int k = 1; k < 6; k++) {
				if (dice_cnt[k] == 1) val = k + 1;
			}
			prize[j] = val * 100;
		}
	}
	cout << findMax(prize) << "\n";
}