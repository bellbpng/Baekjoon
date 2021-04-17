#include <iostream>
using namespace std;

int main()
{
	int date;
	cin >> date;

	bool con1 = (date % 4 == 0) && (date % 100 != 0);
	bool con2 = date % 400 == 0;

	if (con1 || con2) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	return 0;
}