#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct member {
	int age;
	char name[101];
};

bool comp(member m1, member m2) {
	return m1.age < m2.age;
}

int main()
{
	int N;
	cin >> N;
	vector<member> m(N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &m[i].age, &m[i].name);
	}
	
	stable_sort(m.begin(), m.end(), comp);

	for (int i = 0; i < N; i++) {
		printf("%d %s\n", m[i].age, m[i].name);
	}
}