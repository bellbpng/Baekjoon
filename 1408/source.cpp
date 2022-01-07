#include <iostream>
#include <string>
using namespace std;

typedef struct time {
	int hour;
	int min;
	int sec;
};

void printTime(time t) {
	string hh = to_string(t.hour);
	string mm = to_string(t.min);
	string ss = to_string(t.sec);
	hh = hh.length() == 1 ? '0' + hh : hh;
	mm = mm.length() == 1 ? '0' + mm : mm;
	ss = ss.length() == 1 ? '0' + ss : ss;
	cout << hh << ":" << mm << ":" << ss << "\n";
}

int main()
{
	time now, start, remain;
	scanf("%d:%d:%d", &now.hour, &now.min, &now.sec);
	scanf("%d:%d:%d", &start.hour, &start.min, &start.sec);

	remain.sec = start.sec - now.sec;
	if (remain.sec < 0) {
		remain.sec += 60;
		start.min--;
	}

	remain.min = start.min - now.min;
	if (remain.min < 0) {
		remain.min += 60;
		start.hour -= 1;
	}

	remain.hour = start.hour - now.hour;
	if (remain.hour < 0)
		remain.hour += 24;

	printTime(remain);
}