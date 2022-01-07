#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int result = 0;
	for (int i = 0; i < N; i++) {
		int student, apple;
		cin >> student >> apple;
		result += apple % student;
	}
	cout << result << "\n";
}