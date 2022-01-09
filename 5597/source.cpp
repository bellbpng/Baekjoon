#include <iostream>
using namespace std;

int main()
{
	bool assignment[30] = { false, };
	for (int i = 0; i < 28; i++) {
		int idx;
		scanf("%d", &idx);
		assignment[idx-1] = true;
	}
	for (int i = 0; i < 30; i++) {
		if (assignment[i] == false)
			cout << i + 1 << "\n";
	}
}