#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef struct Student {
	string name;
	int korean;
	int english;
	int math;
};

bool cmp(const Student& s1, const Student& s2) {
	if (s1.korean == s2.korean) {
		if (s1.english == s2.english) {
			if (s1.math == s2.math) return s1.name < s2.name;
			else return s1.math > s2.math;
		}
		else return s1.english < s2.english;
	}
	else return s1.korean > s2.korean;
}

int main()
{
	int N;
	cin >> N;
	vector<Student> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].name;
		scanf("%d %d %d", &v[i].korean, &v[i].english, &v[i].math);
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << v[i].name;
		printf("\n");
	}
}