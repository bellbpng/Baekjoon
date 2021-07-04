#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, doctor;
	cin >> str >> doctor;
	int len1 = str.length(); 
	int len2 = doctor.length();
	if (len1 < len2) { printf("no\n"); }
	else { printf("go\n"); }
}

