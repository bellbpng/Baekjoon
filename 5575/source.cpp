#include <iostream>

int main()
{
	for (int i = 0; i < 3; i++) {
		int h_work = 0, m_work = 0, s_work = 0;
		int h_home = 0, m_home = 0, s_home = 0;
		std::cin >> h_work >> m_work >> s_work;
		std::cin >> h_home >> m_home >> s_home;
		int h = h_home - h_work;
		int m = m_home - m_work;
		int s = s_home - s_work;
		if (s < 0) {
			s += 60; m--;
		}
		if (m < 0) {
			m += 60; h--;
		}
		std::printf("%d %d %d\n", h, m, s);
	}
}