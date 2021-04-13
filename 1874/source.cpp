#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	stack<int> s, l;
	l.push(0);
	vector<int> v;
	vector<char> c;

	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		v.push_back(input);
	}

	for (int i = 0; i < v.size(); i++) {
		if (s.empty() || s.top() < v[i]) {
			for (int j = l.top() + 1; j <= v[i]; j++) {
				s.push(j);
				l.push(j);
				c.push_back('+');
			}
			s.pop();
			c.push_back('-');
		}
		else if(s.top() == v[i]){
			s.pop();
			c.push_back('-');
		}
		else if (s.top() > v[i]) {
			printf("NO\n");
			return 0;
		}
	}

	for (int i = 0; i < c.size(); i++) {
		printf("%c\n", c[i]);
	}
	return 0;
}