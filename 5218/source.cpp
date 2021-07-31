#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		string str1, str2;
		cin >> str1 >> str2;
		int len = str1.length();
		printf("Distances: ");
		for (int j = 0; j < len; j++) {
			char x = str1[j];
			char y = str2[j];
			int dst = 0;
			if (y >= x)
				dst = y - x;
			else
				dst = (y + 26) - x;
			printf("%d ", dst);
		}
		printf("\n");
	}
}