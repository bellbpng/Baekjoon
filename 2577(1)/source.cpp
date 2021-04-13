#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C, result;
	cin >> A >> B >> C;
	result = A * B * C;

	string str = to_string(result);
	int count[10];
	for (int i = 0; i < 10; i++) {
		count[i] = 0;
		for (int j = 0; j < str.length(); j++) {
			int diff = '0';
			if (str[j] == diff + i)
				count[i]++;
		}
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << endl;
	return 0;
}
