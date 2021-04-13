#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	int N_number, cnt = 0, K = 0, temp = 0;
	int diff = '0';

	cin >> N;
	N_number = stoi(N);

	char front, end;
	
	if (N_number == 0) {
		cout << cnt+1 << endl;
		return 0;
	}

	while (temp != N_number) {
		cnt++;
		if (N.length() == 1) {
			front = '0';
			end = N[0];
		}
		else {
			front = N[0];
			end = N[1];
		}
		K = (front - diff) + (end - diff);
		temp = K % 10 + (end - diff) * 10;
		N = to_string(temp);
	}
	cout << cnt << endl;
	return 0;
}