#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T, H, W, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> n;
		int store = n % H;
		int room = n / H + 1;
		if (store == 0) {
			store = H;
			room = n / H;
		}
		string str = to_string(room);
		if (str.length() == 1) {
			string roomNum = '0' + str;
			cout << store << roomNum << endl;
		}
		else { cout << store << str << endl; }
	}
}