#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[101];
	scanf("%s", str);
	char* ptr = strtok(str, ",");
	int sum = 0;
	while (ptr != NULL) {
		sum += atoi(ptr);
		ptr = strtok(NULL, ",");
	}
	printf("%d\n", sum);
}