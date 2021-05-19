#include <iostream>
#include <vector>
using namespace std;

typedef struct body {
	int weight;
	int height;
};

int main()
{
	vector<body> v;
	body temp;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp.weight >> temp.height;
		v.push_back(temp);
	}

	for (int i = 0; i < N; i++) {
		int grade = 1;
		for (int j = 0; j < N; j++) {
			if(v[j].weight>v[i].weight && v[j].height>v[i].height)
			{
				grade++;
			}
		}
		printf("%d ", grade);
	}
	return 0;
}