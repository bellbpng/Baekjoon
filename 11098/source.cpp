#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n;i++) {
		int p;
		scanf("%d", &p);
		string player;
		int max = 0;
		for (int j = 0; j < p; j++) {
			int price;
			string name;
			scanf("%d", &price);
			cin >> name;
			if (price > max) {
				max = price;
				player = name;
			}
		}
		cout << player;
		printf("\n");
	}
}