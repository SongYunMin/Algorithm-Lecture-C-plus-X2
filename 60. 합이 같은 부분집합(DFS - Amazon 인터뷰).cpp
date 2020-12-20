//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n, a[11], total = 0;
//bool flag = false;
//
//void DFS(int L, int sum)
//{
//	// total값의 반을 넘어가면 이미 정답이 아니므로 return
//	if (sum > (total / 2)) return;
//	// flag 변수를 이용하여 답이 맞는지 아닌지를 판단함
//	if (flag == true) return;
//	// Level이 n+1 개라면 재귀 종료 조건
//	if (L == n + 1) {
//		// DFS의 결과 값 == (모든 원소를 더한 값 - DFS의 결과 값)
//		if (sum == (total - sum)) {
//			flag = true;
//		}
//
//	}
//	else {
//		// 이진트리 구조로 해석
//		DFS(L + 1, sum + a[L]);		// 원소를 사용한다면? (왼쪽)
//		DFS(L + 1, sum);			// 원소를 사용하지 않는다면? (으론쪽)
//	}
//}
//
//int main(void)
//{
//	int i;
//	std::cin >> n;
//	// 원소들의 합을 저장
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//		total += a[i];
//	}
//
//	DFS(1, 0);
//
//	if (flag) std::cout << "YES" << std::endl;
//	else std::cout << "NO" << std::endl;
//
//	return 0;
//}