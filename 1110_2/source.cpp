#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, cnt = 0;
    cin >> N;

    int diff = '1' - 1;
    string originNum;
    string newNum = "";
    if (N < 10) {
        originNum.push_back('0');
        originNum.push_back(N + diff);
    }
    else {
        string temp = to_string(N);
        originNum = temp;
    }

    string pastNum = originNum;

    while (originNum != newNum) {
        newNum.clear();
        int leftNum = pastNum[0] - diff;
        int rightNum = pastNum[1] - diff;
        int temp = leftNum + rightNum;
        newNum.push_back(pastNum[1]);
        newNum.push_back(temp % 10 + diff);
        cnt++;
        pastNum = newNum;
    }

    printf("%d\n", cnt);
    return 0;
}