//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main(void)
//{
//	int n, m;
//	int st, ed, cost;
//	std::cin >> n >> m;
//	
//	std::vector<std::vector<int>> adj(n, std::vector<int>(n, 0));
//
//	for (int i = 0; i < m; i++) {
//		std::cin >> st >> ed >> cost;
//		adj[st-1][ed-1] = cost;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", adj[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}