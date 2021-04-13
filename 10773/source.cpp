#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K, temp;
	long long total = 0;
	stack<int> s;
	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> temp;
		if (temp == 0) {
			s.pop();
		}
		else {
			s.push(temp);
		}
	}
	while (!s.empty()) {
		total += s.top();
		s.pop();
	}
	
	cout << total << endl;
	return 0;
}