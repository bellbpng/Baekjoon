#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int first, second;
		cin >> first >> second;
		if (first == 0 && second == 0) break;
		if (first % second == 0) { printf("multiple\n"); }
		else if (second % first == 0) { printf("factor\n"); }
		else { printf("neither\n"); }
	}
}