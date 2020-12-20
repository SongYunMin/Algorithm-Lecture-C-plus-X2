//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n, a[11], m, cnt;
//
//void DFS(int L, int sum)
//{
//	if (L == n + 1) {
//		if (sum == m) {		// 목표 값이 m과 같으면?
//			cnt++;			// cnt 증가
//		}
//	}
//	else {
//		DFS(L + 1, sum + a[L]);			// 더하는 경우
//		DFS(L + 1, sum - a[L]);			// 빼는 경우
//		DFS(L + 1, sum);				// 둘다 안하는 경우
//	}
//}
//
//
//int main(void)
//{
//	int i;
//	std::cin >> n >> m;
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//	}
//
//	DFS(1, 0);			// 레벨은 1, 12를 만들어 내기 위한 sum은 0에서 출발
//	if (cnt == 0) {
//		std::cout << "-1" << std::endl;
//	}
//	else {
//		std::cout << cnt << std::endl;
//	}
//	return 0;
//}