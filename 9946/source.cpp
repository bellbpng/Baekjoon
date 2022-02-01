#include <iostream>
#include <string>

int main()
{
	int case_num = 0;
	while (true) {
		std::string first, next;
		std::cin >> first >> next;
		if (first == "END" && next == "END") break;
		case_num++;
		int alpha_first[26] = { 0, };
		int alpha_next[26] = { 0, };
		int len_first = first.length();
		int len_next = next.length();
		if (len_first != len_next)
			std::cout << "Case " << case_num << ": different\n";
		else {
			for (int i = 0; i < len_first; i++) {
				int idx = first[i] - 'a';
				alpha_first[idx]++;
			}
			for (int i = 0; i < len_next; i++) {
				int idx = next[i] - 'a';
				alpha_next[idx]++;
			}
			bool chk = true;
			for (int i = 0; i < 26; i++)
				if (alpha_first[i] != alpha_next[i]) {
					chk = false; break;
				}
			if (chk) std::cout << "Case " << case_num << ": same\n";
			else std::cout << "Case " << case_num << ": different\n";
		}
	}
}