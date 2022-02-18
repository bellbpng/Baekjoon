#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int num1 = a, num2 = b, num3 = c;
	char sign[2] = { '+', '=' };
	int idx = 0; bool chk = true;
	while (chk) {
		if (num1 + num2 == num3) {
			sign[idx] = '+'; chk = false;
		}
		else if (num1 - num2 == num3) {
			sign[idx] = '-'; chk = false;
		}
		else if (num1 * num2 == num3) {
			sign[idx] = '*'; chk = false;
		}
		else if (num1 / num2 == num3) {
			sign[idx] = '/'; chk = false;
		}
		else {
			sign[idx++] = '=';
			int tmp = num1;
			num1 = num2, num2 = num3, num3 = tmp;
		}
	}
	std::cout << a << sign[0] << b << sign[1] << c << "\n";
}