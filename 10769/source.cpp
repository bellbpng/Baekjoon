#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	int idx = 0, cnt_happy = 0;
	while (true) {
		if (str.find(":-)", idx) == std::string::npos) break;
		idx = str.find(":-)", idx) + 1;
		cnt_happy++;
	}
	idx = 0;
	int cnt_sad = 0;
	while (true) {
		if (str.find(":-(", idx) == std::string::npos) break;
		idx = str.find(":-(", idx) + 1;
		cnt_sad++;
	}
	if (cnt_happy == 0 && cnt_sad == 0) std::cout << "none\n";
	else if (cnt_happy == cnt_sad) std::cout << "unsure\n";
	else if (cnt_happy > cnt_sad) std::cout << "happy\n";
	else std::cout << "sad\n";
}