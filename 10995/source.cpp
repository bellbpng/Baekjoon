#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int row = 1;
	for (int j = 0; j < N; j++) {		
		if (row % 2 == 1) {
			for (int i = 0; i < N; i++)
				printf("* ");
			printf("\n");
		}
		else {
			for (int i = 0; i < N; i++)
				printf(" *");
			printf("\n");
		}
		row++;
	}
}