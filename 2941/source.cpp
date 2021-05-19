#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int total_len = str.length();
	int index = 0;
	int two_word_cnt = 0, three_word_cnt = 0;
	int z_equal_cnt = 0;

	while (str.find("c=", index) != string::npos) {
		two_word_cnt++;
		index = str.find("c=", index) + 1;
	}

	index = 0;
	while (str.find("c-", index) != string::npos) {
		two_word_cnt++;
		index = str.find("c-", index) + 1;
	}

	index = 0;
	while (str.find("dz=", index) != string::npos) {
		three_word_cnt++;
		index = str.find("dz=", index) + 1;
	}

	index = 0;
	while (str.find("d-", index) != string::npos) {
		two_word_cnt++;
		index = str.find("d-", index) + 1;
	}

	index = 0;
	while (str.find("lj", index) != string::npos) {
		two_word_cnt++;
		index = str.find("lj", index) + 1;
	}

	index = 0;
	while (str.find("nj", index) != string::npos) {
		two_word_cnt++;
		index = str.find("nj", index) + 1;
	}

	index = 0;
	while (str.find("s=", index) != string::npos) {
		two_word_cnt++;
		index = str.find("s=", index) + 1;
	}

	index = 0;
	while (str.find("z=", index) != string::npos) {
		z_equal_cnt++;
		index = str.find("z=", index) + 1;
	}
	
	two_word_cnt = two_word_cnt + z_equal_cnt - three_word_cnt;
	int general_alpha = total_len - 2 * two_word_cnt - 3 * three_word_cnt;
	int result = general_alpha + two_word_cnt + three_word_cnt;
	printf("%d\n", result);

	return 0;
}