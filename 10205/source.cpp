#include <iostream>
#include <string>

int main()
{
	int k = 0;
	std::cin >> k;
	for (int i = 0; i < k; i++) {
		int h = 0;
		std::cin >> h;
		std::string actions;
		std::cin >> actions;
		int len = actions.length();
		for (int j = 0; j < len; j++) {
			char ch = actions[j];
			switch (ch) {
			case 'c': h++; break;
			case 'b': h--; break;
			}
		}
		std::printf("Data Set %d: \n", i + 1);
		std::printf("%d\n\n", h);
	}
}