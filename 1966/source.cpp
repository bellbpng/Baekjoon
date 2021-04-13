#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T, N, M, ipt, cnt;
    cin >> T;
 
    for (int j = 0; j < T; j++) {
        cnt = 0;
        cin >> N >> M;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int i = 0; i < N; i++) {
            cin >> ipt;
            q.push({ i, ipt });
            pq.push(ipt);
        }

        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (value == pq.top()) {
                pq.pop();
                cnt++;
                if (index == M) {
                    cout << cnt << endl;
                    break;
                }
            }
            else {
                q.push({ index, value });
            }
        }
    }
    return 0;
}