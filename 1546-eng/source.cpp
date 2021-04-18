#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> scores);
float findAvg(vector<float> new_scores);

int main()
{
	int N;
	cin >> N;
	vector<int> scores;
	vector<float> new_scores;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		scores.push_back(temp);
	}
	int max = findMax(scores);
	for (int i = 0; i < scores.size(); i++) {
		float temp = float(scores[i]) / float(max) * 100;
		new_scores.push_back(temp);
	}
	printf("%f\n", findAvg(new_scores));
	return 0;
}

int findMax(vector<int> scores) {
	int max = scores[0];
	for (int i = 1; i < scores.size(); i++) {
		if (max < scores[i]) {
			max = scores[i];
		}
	}
	return max;
}

float findAvg(vector<float> new_scores) {
	float sum = 0.0;
	for (int i = 0; i < new_scores.size(); i++) {
		sum += new_scores[i];
	}
	return sum/new_scores.size();
}