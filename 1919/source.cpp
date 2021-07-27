#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int len1 = str1.length();
	int len2 = str2.length();
	int alp_str1[26] = { 0, };
	int alp_str2[26] = { 0, };
	for (int i = 0; i < len1; i++) {
		int idx = str1[i] - 'a';
		alp_str1[idx]++;
	}
	for (int i = 0; i < len2; i++) {
		int idx = str2[i] - 'a';
		alp_str2[idx]++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		int diff = alp_str1[i] - alp_str2[i];
		cnt += abs(diff);
	}
	printf("%d\n", cnt);
}