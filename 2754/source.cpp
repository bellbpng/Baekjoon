#include <iostream>
#include <string>
using namespace std;

int main()
{
	string score;
	cin >> score;
	char ch = score[0];
	float result = 0.0;
	switch (ch) {
	case 'A':
		result = 4.0;
		break;
	case 'B':
		result = 3.0;
		break;
	case 'C':
		result = 2.0;
		break;
	case 'D':
		result = 1.0;
		break;
	case 'F':
		printf("%.1f\n", result);
		return 0;
	}

	ch = score[1];
	switch (ch) {
	case '+':
		result += 0.3;
		break;
	case '-':
		result -= 0.3;
		break;
	}
	printf("%.1f\n", result);
}