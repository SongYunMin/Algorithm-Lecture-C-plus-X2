#include <iostream>

int map[30][30], ch[30], cnt = 0, n;

void DFS(int v) {
	int i;
	if (v == n) {
		cnt++;
	}
	else {
		for (i = 1; i <= n; i++) {
			if (map[v][i] == 1 && ch[i] == 0) {
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
}

int main(void)
{
	int m, i, a, b;
	std::cin >> n >> m;
	for (i = 1; i <= m; i++) {
		std::cin >> a >> b;
		map[a][b] = 1;
	}
	ch[1] = 1;
	DFS(1);
	std::cout << cnt;
	return 0;
}