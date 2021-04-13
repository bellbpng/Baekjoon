#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int K = (A > B) ? A : B;

    vector<int> CommonDiv;
    int MaxCommonDiv;
    int MinCommonMul;

    for (int i = 1; i <= K; i++) {
        if (A % i == 0 && B % i == 0) {
            CommonDiv.push_back(i);
        }
    }

    MaxCommonDiv = CommonDiv[0];
    for (int i = 1; i < CommonDiv.size(); i++) {
        if (MaxCommonDiv < CommonDiv[i]) {
            MaxCommonDiv = CommonDiv[i];
        }
    }

    MinCommonMul = MaxCommonDiv * (A / MaxCommonDiv) * (B / MaxCommonDiv);
    printf("%d %d", MaxCommonDiv, MinCommonMul);
    return 0;
}